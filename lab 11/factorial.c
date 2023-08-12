#include<stdio.h>
int main(){
	int n,fact=1,i=1;
	printf("Enter no.");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	
	printf("factorial=%d",fact);
return 0;
}

