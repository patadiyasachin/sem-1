#include<stdio.h>
int add(int a, int b);
int main(){
	int m,n,sum;
	printf("Enter first No.");
	scanf("%d",&m);
	
	printf("Enter second No.");
	scanf("%d",&n);
	
	sum=add(m,n);
	printf("sum = %d ",sum);
return 0;
}

int add(int a, int b){
	int ans;
	ans=a+b;
	return ans;
}

