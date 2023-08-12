#include<stdio.h>

int main(){
	
	int a;
	
	printf("enter a: ");
	scanf("%d", &a);
	
	a = (a%2==0)?(printf("a is even")):(printf("a is odd"));
	
	return 0;
}