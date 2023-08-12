#include<stdio.h>
int main(){
	int m,n,i=m;
	printf("Enter First No.");
	scanf("%d",&m);
	i=m+1;
	
	printf("Enter First No.");
	scanf("%d",&n);
	
	while(i>m && i<n){
		if(i%2==0){
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
