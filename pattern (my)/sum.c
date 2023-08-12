#include<stdio.h>
int main()
{
	int i,j,sumj=0,sumi=0,n;
	printf("Enter no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			sumj=sumj+j;
		}
		sumi=sumj+i;
	}
	printf("ans=%d",sumi);
	return 0;
}

