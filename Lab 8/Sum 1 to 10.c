#include<stdio.h>
int main(){
	int i=1,sum=0;
	while(i<=10){
		printf("%d\n",i);
		sum=sum+i;
		i++;
	}
	
	printf("sum=%d",sum);
	
	return 0;
}
