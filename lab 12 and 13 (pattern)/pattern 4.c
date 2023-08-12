#include<stdio.h>
int main(){
	int n,i=1,j;
	
	printf("Enter No.");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=n;j>n-i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	
return 0;
}

