#include <stdio.h>

void f(){
    //static inicializa o valor da variavel a 0 e vai armazenando o valor por cada chamada da função
    static int i;
    
    ++i;
    printf("%d\n", i);
}

int main(){

    f();
    f();
    f();

    return 0;
}