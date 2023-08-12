#include<stdio.h>
int main(){
	int base,exp,i=1,pow=1;
	
	printf("Enter base .");
	scanf("%d",&base);
	
	printf("Enter pow .");
	scanf("%d",&exp);
	
	for(i=1;i<=exp;i++){
		pow=pow*base;
	}
	
	printf("%d",pow);
return 0;
}

