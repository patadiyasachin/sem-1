//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=5;i>=1;i--)
//	{
//		for(j=5;j>=i;j--)
//		{
//			printf("%d",j);
//			printf(" ");
//		}
//		printf("\n");
//	}
//}


#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(k=5;k>i;k--){
			printf(" ");
		}
		
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
