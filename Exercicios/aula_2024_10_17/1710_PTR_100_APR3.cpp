#include <iostream> 
#include <fstream>
#include <string>

void meuCarimbo(void);
void mudaLinha(void);
void separador(void);
void exibirTexto(const std::string& arquivo);

int main() {
    int opcao;

    do {
        meuCarimbo();
        separador();
        std::cout << "Menu de opcoes:\n";
        std::cout << "1. Mostrar o valor da variavel e o seu endereco pelo ponteiro\n";
        std::cout << "2. Mostrar o valor da variavel, o valor que o ponteiro aponta e o seu endereco pelo ponteiro\n";
        std::cout << "3. Valor alterado na variavel atraves do ponteiro\n";
        std::cout << "4. Tentativa de runtime error\n";
        std::cout << "5. Mostrar endereco de memoria do array atraves de ponteiro e o valor do primeiro elemento\n";
        std::cout << "0. Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                exibirTexto("1710_PTR_100_APR1.txt"); // Arquivo para Exemplo 1
                break;
            case 2:
                exibirTexto("1710_PTR_100_APR2.txt"); // Arquivo para Exemplo 2
                break;
            case 3:
                exibirTexto("1710_PTR_100_APR3.txt"); // Arquivo para Exemplo 3
                break;
            case 4:
                exibirTexto("1710_PTR_100_APR4.txt"); // Arquivo para Exemplo 4
                break;
            case 5:
                exibirTexto("1710_PTR_100_APR5.txt"); // Arquivo para Exemplo 5
                break;
            case 0:
                break;
            default:
                std::cout << "Opcao invalida!" << std::endl;
                break;
        }
        mudaLinha();
        separador();
    } while (opcao != 0);

    return 0;
}

// Funções auxiliares
void meuCarimbo(void) {
    time_t tempo_atual = time(NULL);
    struct tm *tempo_local = localtime(&tempo_atual);
    char data_hora[64];
    strftime(data_hora, sizeof(data_hora), "%d-%m-%Y %H:%M:%S", tempo_local);
    printf("\n[UFCD_U15] - [Ponteiros] - [Andre Proenca] - [ %s ]", data_hora);
    mudaLinha();
}

void mudaLinha(void) {
    printf("\n");
}

void separador(void) {
    for (int i = 0; i < 120; i++) {
        printf("*");
    }
    printf("\n");
}

void exibirTexto(const std::string& arquivo) {
    std::ifstream ficheiro(arquivo);  // Abre o arquivo

    // Verifica se o arquivo foi aberto corretamente
    if (!ficheiro) {
        std::cerr << "Erro ao abrir o ficheiro: " << arquivo << std::endl;
        return;
    }

    std::cout << "Conteudo do ficheiro '" << arquivo << "':" << std::endl;

    std::string linha;
    // Lê e exibe cada linha do arquivo
    while (getline(ficheiro, linha)) {
        std::cout << linha << std::endl; // Mostra a linha
    }

    ficheiro.close(); // Fecha o arquivo
}