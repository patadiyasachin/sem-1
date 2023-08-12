//#include<stdio.h>
//int main()
//
////average of three no
//{
//	
//	float a,b,c,d;
//	printf("Enter first no.");
//	scanf("%f",&a);
//	
//	printf("Enter second no.");
//	scanf("%f",&b);
//	
//	printf("Enter third no.");
//	scanf("%f",&c);
//	
//	d=(a+b+c)/3;
//	printf("average is= %.2f",d);
//				
//}


//with function
void avg(int x,int y,int z);

#include<stdio.h>
int main(){
	int a,b,c,n;
	printf("Enter No.");
	scanf("%d %d %d",&a,&b,&c);
	
	avg(a,b,c);
	
	return 0;
}

void avg(int x,int y,int z){
	int ans;
	ans=(x*y*z)/3;
	printf("average=%d",ans);
}


//some mistace
