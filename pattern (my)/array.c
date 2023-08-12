#include<stdio.h>
int main()
{
    int mark[3][3],j,i,k,sum=0;
    for (i=1;i<=3;i++){
    	for(j=1;j<=3;j++){
	    	printf("Enter element:");
	    	scanf("%d",&mark[i][j]);
	    	sum=sum+mark[i];
		}
	}
	
	for(k=1;k<=3;k++){
		printf("%d\n",mark[i][j]);
	}
	
	printf("sum = %d",sum);
	return 0;
}

