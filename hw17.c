
#include <stdio.h>

int main()
{
	printf("\n 1-Indica o teu clube:");
	printf("\n 2-Indica a tua bebida:");
	printf("\n 3-Indica a tua comida:");
	printf("\n 0-SAIR\n");
	int op;
	op=getchar();
	printf("\nop=%c\n",op);
	switch(op){
	    case'1':
	    printf("Escreve o teu clube:");
	    break;
	    case'2':
	    printf("Escreve a tua bebida:");
	    break;
	    case'3':
	    printf("Escreve a tua bebida:");
	    break;
	    case'0':
	    printf("SAIR:");
	    break;
	    default:
	    printf("NAO ESTA NOAS OPÇOES");
	}
	return 0;
}