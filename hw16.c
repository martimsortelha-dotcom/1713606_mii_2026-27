#include <stdio.h>
#define FIM '0'
int main()
{
    printf("INTRODUZA UMA PALAVRA");
    int op;
    do{
        op=getchar();
        if(op==10){
        printf("\n INTRODUZA UMA PALAVRA");
        }
        op=getchar();
        printf("\n op=%c", op);
    }while(op!=FIM);
    return 0;
}