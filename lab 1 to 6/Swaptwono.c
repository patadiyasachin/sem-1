//#include <stdio.h>
//int main()
//{
//    int a, b, temp;
//    printf("Enter first no:");
//    scanf("%d", &a);
//
//    printf("Enter second no:");
//    scanf("%d", &b);
//
//    temp = a;
//    a = b;
//    b = temp;
//
//    printf("Before swap %d %d\n", b, a);
//    printf("After swap no. %d %d", a, b);
//    return 0;
//}

void swaptwono(int a,int b);
#include<stdio.h>
int main(){
	int m,n;
	printf("Enter first no");
	scanf("%d",&n);
	printf("Enter second no");
	scanf("%d",&m);
	
    swaptwono(n,m);
	return 0;
}

void swaptwono(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("after swap No.");
	printf("%d %d", a,b);
}
