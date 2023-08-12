#include<stdio.h>
int main(){
	int n,i=1,d=0,ca;
	printf("Enter No. ");
	scanf("%d",&n);
	
	while(n!=0){
		d=n%10;
		printf("%d",d);
		n=n/10;
	}
	ca=n;
	if(ca==d){
		printf("palingdrom No");
	}
	
	else{
		printf(" Not palingdrom No");
	}
	
	return 0;
}
