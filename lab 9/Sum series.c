#include<stdio.h>
int main(){
	int n,i=1,sum=0;
	printf("Enter No.");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i==1){
			printf("%d",i);
			sum=sum+1;
		}
		
		else if(i%2==0){
			printf("%d ",-i);
			sum=sum-i;	
		}
		
		else{
			printf("%d ",+i);
			sum=sum+i;	
		}
		i++;
	}
	
	printf("\nsum=%d",sum);
	return 0;
}
