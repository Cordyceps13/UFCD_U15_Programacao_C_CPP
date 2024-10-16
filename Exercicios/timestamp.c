#include <stdio.h>
#include <time.h>

void mudaLinha(void); 
void meuCarimbo(void);

int main() 
{
	
	meuCarimbo();
	mudaLinha();

	// O meu programa começa aqui...

	
		




		
} // e termina aqui!

// ------------------------------------------
// Fun��o que muda de linha quando necess�rio
	
	void mudaLinha(void)
	{
		printf("\n"); // muda de linha
	}	
	
// ------------------------------------------
// Fun��o que mostra (algumas) informa��es gerais
	
	void meuCarimbo(void)
	{
		time_t tempo_atual = time(NULL);
		struct tm *tempo_local = localtime(&tempo_atual);
		char data_hora[64];
		
		strftime(data_hora, sizeof(data_hora), "%d-%m-%Y %H:%M:%S", tempo_local);
		printf("\n[Ant�nio Fonseca] - [ %s ]", data_hora);
		mudaLinha();
	}
   