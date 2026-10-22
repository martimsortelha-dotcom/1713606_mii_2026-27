
#include <stdio.h>

int main()
{
	int a,b,c,max;
	printf("\n Introduza 3 valores distintos ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b) {
		if(a>c) max=a;
		else max=c;
	} else {
		if(b>c) max=b;
		else max=c;
	}
	printf("\n O maior valor é %d ",max);
	printf("\n O maior valor é,%d,%d,%d,%d",a,b,c,max);
	return 0;
}