#include <iostream>

using namespace std;

void meuCarimbo(void);
void mudaLinha(void);
void separador(void);

//definição da classe
class nomeClasse{
    //declaração de membros privados desta classe
    private:
        int valorPrivado;

    //declaração de membros públicos desta classe
    public:
        int valorPublico;

        void funcaoPublica(){
            cout << "Esta e a minha primeira funcao" << endl;
        }
}; // Fim da classe 'nomeClasse', termina com ';'

int main(){

    meuCarimbo();
    mudaLinha();
    separador();
    mudaLinha();
    //instanciando um objeto da classe 'nomeClasse'
    nomeClasse objetoNovo;

    //Podemos aceder e modificar os dados de um objeto público
    objetoNovo.valorPublico = 10;

    //Também podemos usar as funções públicas definidas dentro da classe
    objetoNovo.funcaoPublica();
    mudaLinha();
    separador();
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