#include <iostream>
#include <string>

using namespace std;

void meuCarimbo(void);
void mudaLinha(void);
void separador(void);

class Estudante{

    public:
        int idade;
        string nome;

        void mostrar(){
            cout << "Nome: " << nome << "\nIdade: " << idade << endl;
        
        }
};

int main(){

    mudaLinha();
    meuCarimbo();
    mudaLinha();
    separador();
    mudaLinha();

    Estudante novoEstudante;

    cout << "Introduza o nome do estudante: ";
    cin >> novoEstudante.nome;
    mudaLinha();
    separador();
    mudaLinha();
    cout << "Introduza a idade do estudante: ";
    cin >> novoEstudante.idade;
    mudaLinha();
    separador();
    mudaLinha();
    novoEstudante.mostrar();
    
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