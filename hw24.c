#include <stdio.h>
int main()
{
    char ch1='a';
    int x1=210;
    printf("Hello World,%p,%c,%d,%ld,%p,%ld",&ch1,ch1,ch1,sizeof(ch1),&x1,sizeof(x1));
 
    return 0;
}