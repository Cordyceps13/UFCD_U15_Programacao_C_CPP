#include<iostream>
#include <ctime>
#include "template.h"

using namespace std;
// Declaração da classe Date
class Date {
// Atributos privados
private:
    int day, month, year;

public:
    // Construtor
    Date() {
        time_t now = time(0);//A variavel "now" recebe o tempo atual em segundos
        tm* ltm = localtime(&now);//Converte o tempo recebido na variavel "now" de segundos para o formato local
        day = ltm->tm_mday;//Atribui à variavel "day" o dia atual 
        month = ltm->tm_mon + 1; //Atribui à variavel "month" o mês atual, como começa em 0, é necessário somar 1
        year = ltm->tm_year + 1900; //Atribui à variavel "year" o ano atual, como começa em 0, é necessário somar 1900
    }
    
    // Método para imprimir a data com a formatação "00/00/0000"
    void print() {
        cout << day << "/" << month << "/" << year;
    }
};

// Declaração da classe base DVD 
class DVD {
   //Em vez de utilizar private, utilizei protected para permitir que as classes derivadas acedam aos atributos
protected:
   float preco; // Preço do DVD - protegido para acesso nas classes derivadas
public:
   DVD() : preco(0.0) {} // Construtor padrão que inicializa o preço como 0.0 
   //Criação do métodos virtuais para permitir a sobreposição em classes derivadas
   virtual void adquirir() = 0; 
   virtual void devolver() = 0;
   virtual void imprimir() = 0;

   // Método para emitir o recibo
   void recibo() {
      cout << "Recibo - Valor: " << preco << "€" << endl;
   }
};

// Declaração da classe derivada DVDdeVender
class DVDdeVender : public DVD {
public:
   // Construtor padrão que inicializa o preço como 50.0
   DVDdeVender() {
      preco = 25.0; // Preço fixo para venda
   }
   
   // Implementação dos métodos virtuais da classe DVD com a sobreposição
   void adquirir() override {
      cout << "DVD vendido por: " << preco << " euros" << endl;
   }
   
   void devolver() override {
      cout << "DVDs vendidos nao podem ser devolvidos" << endl;
   }
   
   void imprimir() override {
      cout << "DVD para Venda - Preco: " << preco << " euros" << endl;
   }
};

// Declaração da classe derivada DVDdeAlugar
class DVDdeAlugar : public DVD {
private:
   Date dataDevolucao; // Data de devolução do DVD
public:
   // Construtor padrão que inicializa o preço como 8.0
   DVDdeAlugar() {
      preco = 8.0; // Preço fixo para aluguel
   }
   
   // Implementação dos métodos virtuais da classe DVD com a sobreposição
   void adquirir() override {
      cout << "DVD alugado por:" << preco << " euros" << endl;
   }
   
   void devolver() override {
      cout << "DVD devolvido na data: ";
      dataDevolucao.print();
      cout << endl;
   }
   
   void imprimir() override {
      cout << "DVD para Alugar - Preco: " << preco << " euros" << endl;
      cout << "Data de devolucao: ";
      dataDevolucao.print();
      cout << endl;
   }
};

// Declaração da classe derivada ColecaoDeDVDs
class ColecaoDeDVDs {
private:
    DVD** dvds; // Array de ponteiros para DVD
    int numeroDVDs; // Número de DVDs na coleção
    int capacidade; // Capacidade máxima da coleção
    
public:
   // Construtor padrão que inicializa a coleção com capacidade 100
   ColecaoDeDVDs(int cap = 100) : numeroDVDs(0), capacidade(cap) {
      dvds = new DVD*[capacidade];
   }
   
   // Destrutor que liberta a memória alocada para os DVDs
   virtual ~ColecaoDeDVDs() {
      for(int i = 0; i < numeroDVDs; i++) {
         delete dvds[i];
      }
      delete[] dvds;
   }
   
   // Método para acrescentar um DVD à coleção
   void acrescentarDVD(DVD* d) {
      if (numeroDVDs < capacidade) {
         dvds[numeroDVDs] = d;
         numeroDVDs++;
      } else {
         cout << "Colecao cheia!" << endl;
      }
   }
   
   // Método para emitir o relatório de todos os DVDs na coleção
   void relatorio() {
      cout << "=== Relatorio de DVDs ===" << endl;
      for (int i = 0; i < numeroDVDs; i++) {
         dvds[i]->imprimir();
         cout << "------------------------" << endl;
      }
   }
};

// Função principal
int main() {
   header();
   ColecaoDeDVDs c; // Criação de uma coleção de DVDs
   
   // Adição de DVDs à coleção
   c.acrescentarDVD(new DVDdeAlugar());
   c.acrescentarDVD(new DVDdeVender());

   // Emissão do relatório de DVDs
   c.relatorio();
   footer();
   return 0;
}