#include <iostream> 
#include <fstream>
#include <string>

void meuCarimbo(void);
void mudaLinha(void);
void separador(void);
void exibirTexto(int);

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
            case 2:
            case 3:
            case 4:
            case 5: {
                exibirTexto(opcao);
                mudaLinha();
                separador();
                break;
            }
            case 0:
                break;
            default:
                std::cout << "Opcao invalida!" << std::endl;
                break;
        }
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

void exibirTexto(int opcao_txt) {
    std::ifstream ficheiro("1710_PTR_100_APR.txt");
    std::string linha;
    std::string secaoProcurada = "##Exemplo" + std::to_string(opcao_txt);
    bool mostrarConteudo = false;

    if (!ficheiro) {
        std::cerr << "Erro ao abrir o ficheiro!" << std::endl;
        return;
    }

    std::cout << "Procurando pela seccao: " << secaoProcurada << std::endl;

    while (getline(ficheiro, linha)) {
        
    std::cout << "Read line: " << linha << std::endl;
        // Remove espaços em branco no início e no final da linha
        linha.erase(0, linha.find_first_not_of(" \t\n\r"));
        linha.erase(linha.find_last_not_of(" \t\n\r") + 1);

        // Se encontrar a secção correspondente, começa a mostrar o conteúdo
        if (linha == secaoProcurada) {
            mostrarConteudo = true;
            std::cout << "Seccao encontrada. Exibindo conteudo:" << std::endl;
            continue;
        }

        // Se encontrar outra secção, para de mostrar o conteúdo
        if (linha.rfind("##Exemplo", 0) == 0 && mostrarConteudo) {
            break;
        }

        // Mostrar o conteúdo da secção
        if (mostrarConteudo) {
            std::cout << linha << std::endl;
        }
    }

    if (!mostrarConteudo) {
        std::cout << "Secao nao encontrada no arquivo." << std::endl;
    }

    ficheiro.close();
}
