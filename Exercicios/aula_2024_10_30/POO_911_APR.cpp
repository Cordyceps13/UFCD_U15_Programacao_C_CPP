#include <iostream> //Biblioteca padrão de entrada e saída
#include "template.h" //Importação de biblioteca com funções auxiliares

using namespace std; //Para imprimir conteudo utilizando o "cout" diretamente

//Retirei o construtor e os métodos de fora da classe base e coloquei dentro da mesma.
//Fiz isto para que o código ficasse mais legível e organizado.

//Declaração da classe base Retangulo
class Retangulo {
// Atributos privados para serem acedidos apenas pelos métodos da classe, ou eventualmente por classes derivadas.
private:
    int altura;
    int largura;

// Métodos públicos para serem acedidos pelos objetos da classe.
public:
    // Construtor dentro da classe base para vir a ser utilizado posteriormente.
    Retangulo(int alt, int larg){
        altura = alt;
        largura = larg;
    }

    //Métodos declarados dentro da classe base 
    void desenha(){
        //Ciclos aninhados para desenhar um retângulo
        // Define a altura do retângulo 
        for(int i = 0; i < altura; i++) {

            // Define a largura do retângulo preenchendo-o com o caractere '*'
            for(int j = 0; j < largura; j++) // como só há uma instrução neste ciclo não há necessidade de utilizar chavetas
                cout << '*'; 
            
            mudaLinha();

        } 
    }
    void desenha(char c){
        //Ciclos aninhados para desenhar um retângulo
        // Define a altura do retângulo 
        for(int i = 0; i < altura; i++) {
        
            // Define a largura do retângulo preenchendo-o com o caractere recebido como argumento
            for(int j = 0; j < largura; j++) // como só há uma instrução neste ciclo não há necessidade de utilizar chavetas
                cout << c;
        
            mudaLinha();
        } 
    }
};

int main() {
    header();
    mudaLinha();
    // Cria um objeto da classe Retangulo. E recebe a altura e larguda do mesmo por parâmetros
    Retangulo ret(8, 12);
    // Desenha usando as duas versões de desenha() utilizado a sobreposição de funções.
    ret.desenha();
    mudaLinha();
    separador();
    mudaLinha();
    mudaLinha();
    ret.desenha('A');
    footer();
    return 0;
}

//CODIGO DENECESSÁRIO ABAIXO

// Implementação.
// Construtor.
// Retangulo::Retangulo(int alt, int larg) {
//     altura = alt;
//     largura = larg;
// } // Fim de Retangulo::Retangulo()

// Função sobrecarregada.
// void Retangulo::desenha() {

//     // Define a altura do retângulo 
//     for(int i = 0; i < altura; i++) {

//         // Define a largura do retângulo preenchendo-o com o caractere '*'
//         for(int j = 0; j < largura; j++) // como só há uma instrução neste ciclo não há necessidade de utilizar chavetas
//             cout << '*'; 
        
//         mudaLinha();

//     } // Fim de for(int i = 0...
// } // Fim de Retangulo::desenha()

// void Retangulo::desenha(char c){

//     // Define a altura do retângulo 
//     for(int i = 0; i < altura; i++) {
    
//         // Define a largura do retângulo preenchendo-o com o caractere recebido como argumento
//         for(int j = 0; j < largura; j++) // como só há uma instrução neste ciclo não há necessidade de utilizar chavetas
//             cout << c;
    
//         mudaLinha();
//     } // Fim de for(int i = 0...
// } // Fim de Retangulo::desenha(char c)

