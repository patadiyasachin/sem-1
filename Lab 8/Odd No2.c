#include<stdio.h>
int main(){
	int n,i=1;
	printf("Enter No.");
	scanf("%d",&n);
	
	while(i<=n){
		if(i%2!=0){
			printf("Odd No.=%d\n",i);
		}
		i++;
	}
	return 0;
}
