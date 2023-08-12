#include<stdio.h>
int main()
{
	int n,i,ans,sum=0,b;
	printf("Enter No. ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
		printf("\nfactor = %d ",i);
		sum=sum+i;
		}
	}
	printf("sum=%d",sum);
	b=sum;
	
	if(b==n){
		printf("perfect no");
	}
    else{
		printf("perfect no");
	}	
	return 0;
}

