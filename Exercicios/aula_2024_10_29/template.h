// // template.h
#include <iostream>

using namespace std;


void mudaLinha(void)
{
    printf("\n");
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
	

void separador(void)
{
    for (int i = 0; i < 120; i++){
        printf("*");
    }
}

void header(void){
    separador();
    mudaLinha();
    meuCarimbo();
    mudaLinha();
    separador();
    mudaLinha();
}

void footer(void){
    mudaLinha();
    separador();
    mudaLinha();
    meuCarimbo();
    mudaLinha();
    separador();
    mudaLinha();
}