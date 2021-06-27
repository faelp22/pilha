all: build

build: obj
	gcc -o pilha *.o

obj: pilha.c
	gcc -Wall -g -c main.c pilha.c

clean:
	rm *.o pilha

run: all
	./pilha
