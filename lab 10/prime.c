#include<stdio.h>
int main()
{
	int n,i=2,flag=0;
	printf("Enter No.");
	scanf("%d",&n);
	
	while(i<=n/2){
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==1){
		printf("not prime");
	}
	else{
		printf("prime No");
	}
	return 0;
}
