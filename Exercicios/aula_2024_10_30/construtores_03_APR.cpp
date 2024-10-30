#include <iostream>
#include "template.h"

using namespace std;
 
class ClasseBase {
    public:
        int comissao = 10;
        
        void print(){
            cout << "Classe base" << endl;
        }
 
 
};

class ClasseDerivada: public ClasseBase {
    public:
        void print(){
            cout << "Classe derivada" << endl;
        }

};
 
int main() {
    header();
    mudaLinha();

    ClasseDerivada exemploUm;

    exemploUm.print();

    mudaLinha();

    cout << exemploUm.comissao << endl;
  
    footer();
 
    return 0;
}
 