#include <iostream>
#include <string>
#include "template.h"

using namespace std;

class Animal {
    protected:
        string nome;

    public:
        Animal(string _nome) : nome(_nome) {}

        void come() {
            cout << nome << " esta a comer." << endl;
        }
        
};

class mamifero : public Animal {
    protected:
        int numPatas;

    public:
        mamifero(string _nome, int _numPatas) : Animal(_nome) 
        {
            numPatas = _numPatas;
        }

        void anda() {
            cout << nome << " esta a caminhar em " << numPatas << " patas." << endl;
        }
};

class gato : public mamifero {
    public:
        gato(string _nome, int _numPatas) : mamifero(_nome, _numPatas) {}

        void mia() {
            cout << nome << " esta a miar." << endl;
        }
};

int main() {
    header();
    mudaLinha();

    gato meuGato("Loki", 4);

    meuGato.come();
    meuGato.anda();
    meuGato.mia();

    footer();

    return 0;
}
