
# 📋 Projeto WebServer-CPP-Console

![C++](https://img.shields.io/badge/language-C%2B%2B-00599C.svg)
![License](https://img.shields.io/badge/license-MIT-blue.svg)
![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)
![Platform](https://img.shields.io/badge/platform-Windows-lightgrey.svg)

## 📝 Sobre o Projeto

**WebServer-CPP-Console** é um exemplo simples de um servidor web implementado em C++ utilizando a API WinSock. Este projeto demonstra os conceitos fundamentais de criação e gerenciamento de sockets em uma aplicação de console no Windows. Ele é ideal para quem deseja aprender os princípios básicos de redes e programação de servidores em C++.

## 📋 Funcionalidades

- 📡 **Servidor TCP**: Implementa um servidor TCP que escuta na porta 8080.
- 📜 **Resposta HTTP**: Retorna uma resposta HTTP básica com conteúdo HTML.
- 🔄 **Aceitação de Conexões**: Aceita múltiplas conexões de clientes dentro de um loop principal.
- ❌ **Tratamento de Erros**: Verifica e trata erros comuns durante a inicialização e operação do servidor.

## 📦 Estrutura do Projeto

```plaintext
WebServer-CPP-Console/
├── WebServer-CPP-Console.cpp  # Código-fonte principal
├── WebServer-CPP-Console.sln  # Arquivo de solução do Visual Studio
├── WebServer-CPP-Console.vcxproj  # Arquivo de projeto do Visual Studio
├── WebServer-CPP-Console.vcxproj.filters  # Filtros de projeto do Visual Studio
└── WebServer-CPP-Console.vcxproj.user  # Configurações de usuário do Visual Studio
```

## 🛠️ Pré-requisitos

- 💻 **Sistema Operacional**: Windows
- 🔧 **Compilador**: Visual Studio com suporte a C++
- 📦 **Biblioteca**: WinSock2

## 🚀 Como Compilar e Executar

1. **Clonar o repositório**:
   ```bash
   git clone https://github.com/seu-usuario/WebServer-CPP-Console.git
   cd WebServer-CPP-Console
   ```

2. **Abrir o projeto no Visual Studio**:
   - Dê um duplo clique no arquivo `WebServer-CPP-Console.sln` para abrir a solução no Visual Studio.

3. **Compilar**:
   - Selecione a configuração `Debug` e o target `x64`.
   - Pressione `Ctrl + Shift + B` para compilar o projeto.

4. **Executar**:
   - Pressione `F5` para executar o servidor diretamente do Visual Studio.
   - O servidor estará escutando em `127.0.0.1:8080`.

## 🖥️ Exemplo de Uso

1. Abra o navegador de sua preferência.
2. Navegue até `http://127.0.0.1:8080`.
3. Você verá uma página HTML simples retornada pelo servidor.

## 🤝 Contribuição

Se você deseja contribuir com este projeto, siga estas etapas:

1. Faça um fork do repositório.
2. Crie um branch com a nova funcionalidade (`git checkout -b feature/nova-funcionalidade`).
3. Faça o commit das suas alterações (`git commit -m 'Adiciona nova funcionalidade'`).
4. Faça o push para o branch (`git push origin feature/nova-funcionalidade`).
5. Abra um Pull Request.

## 📄 Licença

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

---

**Autor**: [Rodney Victor](https://github.com/rodneyvictorsoares)
