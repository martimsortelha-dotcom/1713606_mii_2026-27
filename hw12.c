#include <stdio.h>

int main()
{
	int i=0;
	while(i<10) {
		printf("identificador1 i=%d\n", i);
		i=i+1;
	}
	do {
		printf("identificador2 i=%d\n",i);
		i=i+1;
	} while(i<15);

	return 0;
}