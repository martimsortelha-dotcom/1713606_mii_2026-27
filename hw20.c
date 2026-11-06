#include <stdio.h>
int main() {
	for(int i=1; i<100; i++) {
		if(i%3==0){
		    printf("CONTINUE EM ACTION\n");
		    continue;
	}
	printf("o valor do inteiro gerado é: %d \n",i);
}
return 0;
}