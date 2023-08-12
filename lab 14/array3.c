#include<stdio.h>

int main(){
	int n,i,co=0,ce=0;

	printf("enter n: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(i=0;i<=n-1;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<=n-1;i++){
		if(a[i]%2==0){
			ce=ce+1;	
		}
		else{
			co=co+1;
		}
	}
	printf("number of odd: %d\n", co);
	printf("number of even: %d", ce);
	return 0;
}
