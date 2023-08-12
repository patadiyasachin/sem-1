#include<stdio.h>
int main(){
	int n,td=0,cn=0,pow=0,i=1,sum=0,d;
	printf("Enter No.");
	scanf("%d",&n);  //123
    cn=n;
	
	while(n!=0){
		td++;   //1
	    n=n/10;	 //12
	}
	
	n=cn;
	while(n!=0){
		d=n%10;
		i=1;
		pow=1;
		while(i<=td){
			pow=pow*d;
			i++;
		}
		sum=sum+pow;
		n=n/10;
	}
	
	if(sum==cn){
		printf("Armstrong No.");	
	}
	
	else{
		printf("Not Armstrong No.");
	}

	return 0;
}
