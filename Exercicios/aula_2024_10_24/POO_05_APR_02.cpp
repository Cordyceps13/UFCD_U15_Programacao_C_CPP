#include <iostream>
#include <string>
#include "template.h"

using namespace std;

class Pessoa{

    private:
        string nome;
        int idade;
        float classificacao;

    public:

        void set(string nome, int idade, float classificacao){
            this -> nome = nome;
            this -> idade = idade;
            this -> classificacao = classificacao;        
        }

        void podeFrequentar(void){
            if(classificacao > 12 && idade >= 20){
                cout << "Pode inscrever-se";
            }
            else{
                cout << "Nao se pode inscrever";
            }
        }

        void get(){
            cout << "Nome da pessoa: " << nome;          
            mudaLinha();  
            cout << "Idade: " << idade;
            mudaLinha();  
            cout << "Classificacao: " << classificacao;
            mudaLinha();  
        }
};

int main(int argc, char *argv[]){

    header();

    if (argc != 4){
        mudaLinha();
        cout << "Erro! O programa espera 3 argumentos." << endl;
        separador();
        mudaLinha();
        return 1;
    }
    
    cout << "Numero de argumentos passados: "    << argc - 1     << endl;
    separador();
    mudaLinha();
    mudaLinha();
    cout << "----De seguida constam os argumentos passados por linha de comandos----" << endl;
    mudaLinha();

    string nome = argv[1];
    int idade = stoi(argv[2]);
    float classificacao = stof(argv[3]);

    Pessoa pessoa;

    pessoa.set(nome, idade, classificacao);

    pessoa.get();
    mudaLinha();
    
    pessoa.podeFrequentar();
    mudaLinha();
    
    footer();

    return 0;
}