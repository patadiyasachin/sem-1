//#include<stdio.h>
//int main(){
//	int a,b,i=1,power=1;
//	printf("Enter x");
//	scanf("%d",&a);
//	
//	printf("Enter y");
//	scanf("%d",&b);
//	
//	while(i<=b){
//		power=power*a;
//		i++;
//	}
//	printf("\nans=%d",power);
//	return 0;
//}


//using function

int power(int a,int b);
#include<stdio.h>
int main(){
	int n,m,pow;
	printf("Enter No.");
	scanf("%d",&n);
	printf("Enter No.");
	scanf("%d",&m);
	pow=power(n,m);
	printf("answer=%d",pow);
	return 0;
}

int power(int a,int b){
	int i=1,ans=1;
	while(i<=b){
		ans=ans*a;
		i++;
	}
	return ans;
}
