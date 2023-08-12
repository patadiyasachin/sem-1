#include<stdio.h>

int main(){
	int n,i;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	int a[n];

	for(i=0;i<=n-1;i++){
		scanf("%d", &a[i]);
	}
		printf("\n\nNormal oder\n");
	for(i=0;i<=n-1;i++){
		printf("number is %d\n", a[i]);
	}
	printf("\n\nReverse oder");
	for(i=n-1;i>=0;i--){
		printf("%d\n", a[i]);
	}
	return 0;
}
