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
            mudaLinha();  
                cout << "Pode inscrever-se";
            }
            else{      
            mudaLinha();  
                cout << "Nao se pode inscrever";
            }
        }

        void get(){      
            mudaLinha();  
            cout << "Nome da pessoa: " << nome;          
            mudaLinha();   
            cout << "Idade: " << idade;
            mudaLinha();   
            cout << "Classificacao: " << classificacao;
            mudaLinha();  
        }
};

int main(){

    header();

    string nome;
    int idade;
    float classificacao;

    Pessoa pessoa;

    cout << "Nome da pessoa: ";
    cin >> nome;
    mudaLinha();

    cout << "Idade: ";
    cin >> idade;
    mudaLinha();

    cout << "Classificacao: ";
    cin >> classificacao;

    pessoa.set(nome, idade, classificacao);
    mudaLinha();
    separador();

    pessoa.get();
    mudaLinha();

    pessoa.podeFrequentar();
    mudaLinha();
    footer();
    
    return 0;
}