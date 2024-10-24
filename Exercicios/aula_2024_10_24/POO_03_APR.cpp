#include <iostream>
#include <string>

using namespace std;

void meuCarimbo(void);
void mudaLinha(void);
void separador(void);

class Utilizador{

    private:
        string nome = "Proenca";
        string palavraPasse = "password1234";

    public:

        void set(string nome, string palavraPasse){
            this -> nome = nome;
            this -> palavraPasse = palavraPasse;        
        }

        void get(){
            
            mudaLinha();
            
            cout << "Nome utilizador: " << nome;          
            mudaLinha();  
            cout << "Palavra passe: " << palavraPasse;
            
            mudaLinha();
            mudaLinha();
            separador();
            mudaLinha();
        }
};

int main(){
    separador();
    mudaLinha();
    meuCarimbo();
    mudaLinha();
    separador();
    mudaLinha();

    Utilizador novoUtilizador;

    novoUtilizador.get();
    novoUtilizador.set("Andre", "1234");
    novoUtilizador.get();
    
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
    printf("\n[UFCD_U15] - [POO] - [Andre Proenca] - [ %s ]", data_hora);
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