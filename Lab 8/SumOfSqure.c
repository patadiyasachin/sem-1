#include<stdio.h>
int main(){
	int i=1,squre,sum=0,n;
	printf("Enter No.");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i*i;
		i++;	
	}
	
	printf("sum of squre is = %d ",sum);
	
	
	return 0;
}
