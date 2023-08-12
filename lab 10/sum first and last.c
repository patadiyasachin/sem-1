#include<stdio.h>
int main(){
	int n=0,d=0,sum=0;
	printf("Enter No.");
	scanf("%d",&n);
	sum=n%10;
	while(n>=10){
		n=n/10;
		d=n;
	}
	sum=sum+d;
	printf("sum=%d",sum);
	return 0;
}
