//#include<stdio.h>
//int main(){
//	int n,i=1,j;
//	
//	printf("Enter of tanble no\n");
//	scanf("%d",&n);
//	
//	while(i<=10){
//		printf("\n%d X %d = %d ",n,i,n*i);
//		i++;
//	}
//	return 0;
//}


//using function


void table(int a);
#include<stdio.h>
int main(){
	int n;
	printf("Enter No.");
	scanf("%d",&n);
	table(n);
	return 0;
}

void table(int a){
	int i;
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n ",a,i,a*i);
	}
}


