#define TAMANHO 10

struct pilha {
	int pilha[TAMANHO];
	int topo;
};

typedef struct pilha Pilha;

void inicializa(Pilha *p);

void insere(Pilha *p, int v);

void retira(Pilha *p);

void retiratodos(Pilha *p);

void vercheia(Pilha *p);

void vervazia(Pilha *p);

void invertepilha(Pilha *p);

void imprimepilha(Pilha *p);

void imprimetopo(Pilha *p);
