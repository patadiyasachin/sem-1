#include<stdio.h>

int main(){
	int n,i,cp=0,cn=0;

	printf("enter n: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(i=0;i<=n-1;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<=n-1;i++){
		if(a[i]>0){
			cp=cp+1;	
		}
		else{
			cn=cn+1;
		}
	}
	printf("number of positive: %d\n", cp);
	printf("number of negative: %d", cn);
	return 0;
}
