#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int fun1();
int fun2();
int fun3();
int main(){
    int x1=10,x2=10;
    int y1=x1++;
    int y2=++x2;
    printf("y1=%d,y2=%d\n",y1,y2);
    for(int i=0;i<10;i++){
       printf("\n***************************");    
       printf("\nvalor func1(), %d",fun1());
       printf("\nvalor func2(), %d",fun2());
       printf("\nvalor func2(), %d",fun3());
    }   
}
int fun1(){
    static int count1=0;
    return count1++;
}
int fun2(){
    int count2=0;
    return count2++;
}
int fun3(){
    int count2=0;
    return ++count2;
}