#include <iostream>
#include <string>
#include "template.h"

using namespace std;

class Animal {
public:
    string name;

    Animal(string name){
        this -> name = name;
    }

    void Eat() {
        cout << name << " is eating." << endl;
    }
};

class Dog : public Animal {
public:
    // Chama o construtor da classe base 'Animal', com o parâmetro 'name'
    Dog(string name) : Animal(name) {}

    void Bark() {
        cout << "au! au!" << endl;
    }
};

class Piupiu : public Animal{
    public:
        Piupiu(string name) : Animal(name) {}

        void Cantar(){
            cout << "piupiu" << endl;
        }
};

int main() {
    header();
    mudaLinha();
    
    Dog myDog("Loki");

    // Evoca o método da classe base.
    myDog.Eat();

    // Evoca o método da classe derivada.
    myDog.Bark();
    separador();
    mudaLinha();   

    Piupiu passaro("Boris");

    // Evoca o método da classe base.
    passaro.Eat();

    // Evoca o método da classe derivada.
    passaro.Cantar();

    footer();

    return 0;
}
