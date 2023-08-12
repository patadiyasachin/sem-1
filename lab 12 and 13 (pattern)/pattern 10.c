#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter No.");
	scanf("%d",&n);
	for(i=1; i<=5 ; i++){
		k=1;
		for(j=1; j<=n+4; j++){
			
			if(j>=6-i && j<=4+i && k){
				printf("*");
				k=0;	
			}
			else{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	} 
	return 0;
}

