#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma comment(lib, "ws2_32.lib")
#include <iostream>
#include <WinSock2.h>
#include <string>

using namespace std;

int main()
{
    cout << "Iniciando a conexao com o Servidor Web.\n";

    //Definição das variaveis
    SOCKET wsocket;
    SOCKET new_wsocket;
    WSADATA wsaData;
    struct sockaddr_in server;
    int server_len;
    int BUFFER_SIZE = 30720;

    //Inicializando o servidor web
    if(WSAStartup(MAKEWORD(2,2), &wsaData) != 0)
    {
        cout << "Nao foi possivel inicializar o Servidor Web.\n";
    }

    //Criando o Web Socket
    wsocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(wsocket == INVALID_SOCKET)
    {
        cout << "Não foi possivel a criacao do web socket. Erro ao ativar o protocolo TCP.\n";
    }

    //Vinculando o socket ao endereço e porta locais
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_port = htons(8080);
    server_len = sizeof(server);

    if(bind(wsocket, (SOCKADDR*)&server, server_len) != 0)
    {
        cout << "Não foi possivel vincular o endereço e a porta.\n";
    }

    //Escutando o endereço web
    if(listen(wsocket, 20) != 0)
    {
        cout << "Não foi possivel escutar o endereço WEB.\n";
    }
    else
    {
        cout << "Escutando -> 127.0.0.1:8080\n";
    }

    while (true)
    {
        //Aceitando a requisição da maquina cliente
    	new_wsocket = accept(wsocket, (SOCKADDR*)&server, &server_len);
        if (new_wsocket == INVALID_SOCKET)
        {
            cout << "Não foi possivel aceitar as requisicoes.\n";
        }

        //Lendo a requisição do cliente
        char buff[30720] = { 0 };
        int bytes = recv(new_wsocket, buff, BUFFER_SIZE, 0);
        if (bytes < 0)
        {
            cout << "Não foi possivel fazer a leitura da requisicao do cliente.\n";
        }

        //resposta do Web Server
        string serverMessage = "HTTP/1.1 200 OK\nContent-Type: text/html\nContent-Length: ";
        string response = "<html><body bgcolor='black'><h1 style='color:grey;'>WEB SERVER RODNEYCOM C++</h1><hr style='color:white;'/><h5 style='color:white;'>Exemplo simples de web server criado com C++ e Visual Studio</h5></body></html>";
        serverMessage.append(to_string(response.size()));
        serverMessage.append("\n\n");
        serverMessage.append(response);

        int bytesSent = 0;
        int totalBytesSent = 0;
        while(totalBytesSent < serverMessage.size())
        {
            bytesSent = send(new_wsocket, serverMessage.c_str(), serverMessage.size(), 0);
            if (bytesSent < 0)
            {
	            cout << "Nao foi possivel o envio da resposta.\n";
            }
            totalBytesSent += bytesSent;
        }
        cout << "Resposta enviada ao cliente.\n";

        closesocket(new_wsocket);
    }

    closesocket(wsocket);
    WSACleanup();

    return 0;
}
