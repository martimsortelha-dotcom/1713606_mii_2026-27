// incorporar as funções de entrada e saída de dados
#include <stdio.h>
// função de execução em C
// a zona de intervenção de uma função é marcada
// pelos parentises abertura e fecho
int main() {
	// 88 em máquinas de 64 bits - 48 máquinas de 32 bits
	// declaramos a variavel c_lidos do tipo long
	// e utilizamos a zero
	long c_lidos=0;
	//reserva de 4 B. Declaramos c como variável
	// do tipo int
	int c;
	// o porgrama espera a introdução de dados
	// espera por introdução de inteiro e armazena em c
	printf("introduz numero:\n");
	scanf(" %d",&c);
	while(c!= -1) {
	    printf("introduz numero-while:\n");
		scanf(" %d",&c);
		c_lidos++;  // abrevia c_lidos = c_lidos+1;
	}
	printf("\n Foram lidos %ld caracteres!",c_lidos);
	return 0;
}
