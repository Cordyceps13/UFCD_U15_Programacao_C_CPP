#include <iostream>
#include "template.h"

using namespace std;
 
class umaClasse {
public:
    int valor;
   
    // Um construtor tem que ter o nome da classe
    // Construtor por omissão [by default] (sem parâmetros)
    umaClasse() {
        cout << "Primeiro construtor e evocado sem parametros." << endl;
        valor = 29;
    }
 
    // Construtor com parâmetros
    umaClasse(int umValor) {
        cout << "Segundo construtor e evocado com um parametro (ou argumento)." << endl;
        valor = umValor;
    }
 
    // Método
    void mostraValor() {
        cout << "valor: " << valor << endl;
    }
 
};
 
int main() {
    header();

    umaClasse objeto_um;        
    umaClasse objeto_dois(10);    
 
    mudaLinha();
    separador();
    mudaLinha();
    cout << "Quando nao e passado nenhum parametro e chamado o primeiro construtor. Exemplo abaixo:";
    mudaLinha();
    objeto_um.mostraValor();
    mudaLinha();
    separador();
    mudaLinha();
    cout << "Quando e passado um parametro e chamado o segundo construtor. Exemplo abaixo:";
    mudaLinha();
    objeto_dois.mostraValor();

    footer();
 
    return 0;
}
 