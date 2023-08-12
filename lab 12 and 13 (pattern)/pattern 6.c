#include<stdio.h>
int main(){
	int i,n,j;

	printf("Enter No.");
    scanf("%d",&n);
    
	for(i=1;i<=n;i++){
		for(j=1; j<=(n-i+1); j++){
			printf("%d",j);
		}
		printf("\n");
	}
return 0;
}

