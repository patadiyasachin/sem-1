#include<stdio.h>
int main(){
	int i,j,n,num=1;
	char A=65;
	
	printf("Enter No.");
    scanf("%d",&n);
    
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%2==0){
				printf("%c  ",A);
				A++;
			}
			
			else{
				printf("%d  ",num);
				num++;
			}
		}
		printf("\n");
	}
return 0;
}

