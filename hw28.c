#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	char *s=malloc(30);
	printf("enter the string : ");
	scanf("%[^\n]s", s);
	printf("you entered %s\n", *&s);
	return 0;
}