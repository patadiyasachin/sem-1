#include<stdio.h>
int main(){
	int n,d=0,sum=0;
	printf("Enter No.");
	scanf("%d",&n);
	
	while(n!=0){
		d=n%10;
		sum=sum*10+d;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}

