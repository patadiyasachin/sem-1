//#include<stdio.h>
//int main(){
//	int n,i=1,factor;
//	printf("Enter no.");
//	scanf("%d",&n);
//	
//	while(i<=n){
//		if(n%i==0){
//			printf("\nfactor=%d",factor);
//			factor++;
//		}
//		i++;
//	}
//	
//	return 0;
//}

void factor(int a);
#include<stdio.h>
int main(){
	int n;
	printf("Enter No.");
	scanf("%d",&n);
	factor(n);
	return 0;
}


void factor(int a){
	int i;
	for(i=1;i<a;i++){
		if(a%i==0){
			printf("factor=%d\n",i);
		}	
	}
}
