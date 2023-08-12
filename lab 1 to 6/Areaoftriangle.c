// //area of triangle

// #include<stdio.h>

// int main()
// {
// 	float a,b,c,area;
// 	printf("Enter First Value:");
// 	scanf("%f",&a);
	
// 	printf("Enter second Value:");
// 	scanf("%f",&b);
	
// 	area=(0.5*a*b);
// 	printf("area=%.2f",area);
// 	return 0;
	
// }

// with function	

void area(int x,int y);

#include<stdio.h>
int main(){
	int a,b;
	printf("Enter No.");
	scanf("%d %d",&a,&b);
	
	area(a,b);
	return 0;
}

void area(int x,int y)
{
	int ans;
	ans=(0.5*x*y);
	printf("area of triangle=%d",ans);
}
