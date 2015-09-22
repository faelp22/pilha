#include "pilha.h"
#include <stdio.h>
/**
 * Autor = Isael Sousa <faelp22@hotmail.com>
 * Date = 17/09/15 as 23:35
 */

int main()
{
	Pilha p1;
	
	inicializa(&p1);
	printf("Sistema iniciado sua pilha esta vazia \n");
	imprimetopo(&p1);
	
	int lista[] = {12,74,18,14,17,11,20,27,35,42};
	
	for(int i = 10; i <= 30; i++)
	{
		insere(&p1, i);
	}
	printf("Teste 1 de invercao antes numeros sequenciais ---------- \n");
	imprimepilha(&p1);
	invertepilha(&p1);
	
	printf("Depois ---------- \n");
	imprimepilha(&p1);
	
	
	retiratodos(&p1);
	
	
	printf("Teste 2 de invercao antes numeros aleatorios ou predefinidos ---------- \n");
	for(int i = 0; i <= TAMANHO -1; i++)
	{
		insere(&p1, lista[i]);
	}
	imprimepilha(&p1);
	invertepilha(&p1);
	
	printf("Invertido ---------- \n");
	imprimepilha(&p1);
		
	return 0;
}
