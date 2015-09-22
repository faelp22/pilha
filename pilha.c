#include "pilha.h"
#include <stdio.h>
/**
 * Autor = Isael Sousa <faelp22@hotmail.com>
 * Date = 17/09/15 as 23:35
 */

void inicializa(Pilha *p)
{
	p->topo = -1;
	return;
}

void insere(Pilha *p, int v)
{
	if(p->topo < TAMANHO -1)
	{
		p->topo++;
		p->pilha[p->topo] = v;
		return; // saio da funcao e retorno para main, assim eu evito um else; clear code :)
	}
	
	vercheia(p);
	return;
}

void retira(Pilha *p)
{
	if(p->topo <= -1)
	{
		vervazia(p);
		return;
	}
	
	p->pilha[p->topo] = 0;
	p->topo--;
	return;
}

void retiratodos(Pilha *p)
{
	if(p->topo <= -1)
	{
		vervazia(p);
		return;
	}
	
	for(int i = 0; i <= TAMANHO -1; i++)
	{
		p->pilha[i] = 0;
	}
	p->topo = -1;
	printf("Conteudo da pilha apagado \n");
	return;
}

void vercheia(Pilha *p)
{
	if(p->topo == TAMANHO -1)
	{
		printf("Pilha cheia so cabe %d elementos \n", TAMANHO);
		return;
	}
	
	printf("Ainda cabe %d elementos \n", (TAMANHO -1) - p->topo);
	return;
}

void vervazia(Pilha *p)
{
	if(p->topo <= -1)
	{
		printf("Pilha vazia, cabe %d elementos \n", TAMANHO);
	}
}

void invertepilha(Pilha *p)
{
	// Divido a lista pela metade -1; pois se não, ao trocar os valos de posição
	// o laço (for) percorreria toda pilha voltando assim os valores para sua posição inicial
	// dando assim uma impressão de que os valores não foram modificados.

	int aux = 0;
	for(int i = (TAMANHO / 2 -1); i > -1; i--)
	{
		aux = p->pilha[i];
		p->pilha[i] = p->pilha[TAMANHO - 1 - i];
		p->pilha[TAMANHO - 1 - i] = aux;
	}
	return;
}

void imprimepilha(Pilha *p)
{
	printf("Conteudo da pilha \n");
	for(int i = 0; i <= TAMANHO -1; i++)
	{
		printf("Posicao %d valor %d \n", i, p->pilha[i]);
	}
	return;
}

void imprimetopo(Pilha *p)
{
	printf("Topo %d \n", p->topo);
	return;
}

