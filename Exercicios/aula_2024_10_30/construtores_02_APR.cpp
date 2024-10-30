#include <iostream>
#include "template.h"

using namespace std;
 
class Carro {
public:
    string nomeCarro;
   
    // Construtor com um argumento
    Carro(string nomeCarro) {
        this -> nomeCarro = nomeCarro;
    }
 
    // Construtor de cópia
    Carro(Carro &outroCarro) {
        nomeCarro = outroCarro.nomeCarro;
    }

    // //Outro construtor de cópia
    // Carro(Carro &maisOutroCarro) {
    //     nomeCarro = maisOutroCarro.nomeCarro;
    // }
 
 
};
 
int main() {
    header();

    mudaLinha();

    Carro carroOriginal("Bougatti");
        cout << "Carro original: " << carroOriginal.nomeCarro << endl;

    mudaLinha();
    separador();
    mudaLinha();
    mudaLinha();

    Carro carroCopiado(carroOriginal);
    cout << "Carro copiado: " << carroCopiado.nomeCarro << endl;

    mudaLinha();
    separador();
    mudaLinha();
    mudaLinha();

    Carro outroCarroCopiado(carroOriginal);
    cout << "Outro carro copiado: " << outroCarroCopiado.nomeCarro << endl;
  
    footer();
 
    return 0;
}
 