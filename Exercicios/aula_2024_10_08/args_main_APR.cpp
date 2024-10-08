#include <iostream>
#include <fstream>
#include <string>
#include <clocale>

using namespace std;

int main(int argc, char* argv[]) {

    // Definir a codificação para UTF-8
    setlocale(LC_ALL, "Portuguese_Portugal.1252");
    
    // Exibir informações sobre os argumentos da linha de comando
    cout << "O nome do programa é: " << argv[0] << endl;
    cout << "Número de argumentos passados: " << argc << endl;
    cout << "----De seguida constam os argumentos passados por linha de comandos----" << endl;

    // Abrir um arquivo de texto para salvar os argumentos
    ofstream ficheiro("args_main_APR.txt");

    if (!ficheiro.is_open()) {
        cerr << "Erro ao abrir o arquivo para escrita." << endl;
        return 1;
    }

    // Escrever os argumentos no terminal e no ficheiro
    for (int i = 0; i < argc; i++) {
        cout << "argv[" << i << "]: " << argv[i] << endl;
        ficheiro << "argv[" << i << "]: " << argv[i] << endl;
    }

    // Fechar o arquivo
    ficheiro.close();
    
    return 0;
}
