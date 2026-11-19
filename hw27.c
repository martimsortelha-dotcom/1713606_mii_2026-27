#include <stdio.h>
void nvalor1(int x); 
void nvalor2(int* x); 
void nvalor3(int* x,int y);
void nvalor4(int *x);
int main()
{
	int a=20,b=20,c=20;
    nvalor1(a);
    printf("a=%d\n",a);
    nvalor2(&a); 
    printf("a=%d\n",a);
    nvalor3(&a,b);
    printf("a=%d,b=%d",a,b);
    nvalor4(&c);
    printf("c=%d",c);
	return 0;
}
void nvalor1(int x){
    x=3;
}
void nvalor2(int* x){
    *x=3;
}
void nvalor3(int* x,int y){
    *x=5;
    y=5;
}
void nvalor4(int *x){
    *x=30;
}