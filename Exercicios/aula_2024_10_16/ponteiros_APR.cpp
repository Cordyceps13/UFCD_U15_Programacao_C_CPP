#include <iostream>

using namespace std;

void meuCarimbo(void);
void mudaLinha(void);
void separador(void)
;
 
int main() {
    
    meuCarimbo();
    mudaLinha();
    separador();

   //Declaração e inicialização de um vetor com capacidade para armazenar 5 valores do tipo inteiro
    int numeros[5] = {10, 20, 30, 40, 50};
   
    //Declaração e inicialização de um ponteiro que aponta para o primeiro valor do vetor "numeros"
    int *ptr = numeros;
   

    //Imprime na consola o primeiro elemento do vetor "numeros"
    mudaLinha();
    cout << "Vamos-lhe mostrar o valor armazenado no primeiro indice do vetor 'numeros':" ;
    mudaLinha();
    cout << numeros[0];
    mudaLinha();

   separador();

    //Imprime na consola o primeiro elemento do vetor "numeros" ao qual o ponteiro "ptr" aponta
    mudaLinha();
    cout << "Agora apesar de o resultado ser o mesmo, estamos a mostrar o valor do primeiro \n"
             <<   "indice do vetor 'numeros' ao qual o ponteiro 'ptr' aponta:";
    mudaLinha();
    cout << *ptr;
    mudaLinha();

    separador();
   
    //Incrementa o ponteiro "ptr" e imprime o valor do segundo indice do vetor "numeros"
    mudaLinha();
    cout << "Vamos incrementar o ponteiro 'ptr' por 1 valor e mostrar o valor do segundo indice \n" 
           <<  "do vetor 'numeros' ao qual o ponteiro 'ptr' aponta:";
    mudaLinha();
    ptr++;
    cout << *ptr;
    mudaLinha();

    separador();
 
    //Decrementa o ponteiro "ptr" e imprime novamente o valor do primeiro indice do vetor "numeros"
    mudaLinha();
    cout << "Vamos decrementar o ponteiro 'ptr' por 1 valor e mostrar novamente o valor do primeiro indice \n" 
           <<  "do vetor 'numeros' ao qual o ponteiro 'ptr' aponta:";
    mudaLinha();
    ptr--;
    cout << *ptr;
    mudaLinha();

    separador();
 
    //É efetuada a soma de dois valores ao ponteiro 'ptr' o que ira mostrar a 3ª posição do vetor 'numeros'
    mudaLinha();
    cout << "Nesta ultima linha ira ser somado ao ponteiro o valor 2, o que o ira colocar na 3a posicao do vetor 'numeros':";
    mudaLinha();
    cout << *(ptr + 2);
    mudaLinha();
    separador();
    mudaLinha();
    meuCarimbo();
    separador();
    mudaLinha();
    mudaLinha();
 
    return 0;
}




//Funções

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

   