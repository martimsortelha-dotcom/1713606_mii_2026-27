#include <stdio.h>

int main()
{
	int x;
	printf("introduza um inteiro de 1 a 9:");
	scanf("%d,&x");
	for(int i=1; i<11; i++) {
		printf("%d*%d=%d\n",x,i,x*i);
	}
	return 0;
}