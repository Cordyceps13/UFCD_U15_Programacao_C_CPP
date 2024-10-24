#include <iostream>
#include <string>

using namespace std;

void meuCarimbo(void);
void mudaLinha(void);
void separador(void);

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

    separador();
    mudaLinha();
    meuCarimbo();
    mudaLinha();
    separador();
    mudaLinha();

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
    mudaLinha();
    separador();
    mudaLinha();
    
    meuCarimbo();
    mudaLinha();
    separador();
    mudaLinha();
    
    return 0;
}


void meuCarimbo(void)
{
    time_t tempo_atual = time(NULL);
    struct tm *tempo_local = localtime(&tempo_atual);
    char data_hora[64];
    
    strftime(data_hora, sizeof(data_hora), "%d-%m-%Y %H:%M:%S", tempo_local);
    printf("\n[UFCD_U15] - [Ponteiros] - [Andre Proenca] - [ %s ]", data_hora);
    mudaLinha();
}


void mudaLinha(void)
{
    printf("\n");
}	

void separador(void)
{
    for (int i = 0; i < 120; i++){
        printf("*");
    }
}