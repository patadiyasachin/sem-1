#include<stdio.h>
int main()
{
	int height[5];
	int weight[5];
	int ch=0,cw=0;
	int i;
	for(i=0;i<5;i++){
		printf("Enter height");
		scanf("%d",&height[i]);
	}
	
	for(i=0;i<5;i++){
		printf("Enter weight");
		scanf("%d",&weight[i]);
	}
	

	for(i=0;i<5;i++){
		if(height[i]>=170){
			ch=ch+1;	
		}	
	}
	
	for(i=0;i<5;i++){
		 if(weight[i]<=50){
			cw=cw+1;
		}
	}
	
	printf("total height up to 170 =%d",ch);
	printf("\ntotal weight less than 50=%d",cw);
	
	return 0;
}

