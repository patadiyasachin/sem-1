#include<stdio.h>

int main(){
	
	int a,b,c,n;
	
	printf("enter value of a: ");
	scanf("%d", &a);
	printf("enter value of b: ");
	scanf("%d", &b);
	printf("enter value of c: ");
	scanf("%d", &c);
	
	n=(a>=b && a>=c)?printf("a is largest"):((b>=a && b>=c?printf("b is largest"):(c>=a && c>=b)?printf("c is largest"):printf("Not valied")));
	return 0;
}