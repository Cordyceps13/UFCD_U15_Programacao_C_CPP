#include <iostream>

using namespace std;

class muitosNumeros{
    public:
        int num;
        string string1;
};

int main(){
    muitosNumeros numeros;

    cout << sizeof(numeros.num) << endl;
    cout << sizeof(numeros.string1) << endl;
    cout << sizeof(numeros) << endl;

    return 0;
}