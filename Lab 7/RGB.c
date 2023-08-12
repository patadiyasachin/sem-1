#include <stdio.h>
int main()
{
    int a, b, d, white, c, m, y, black;
    printf("Enter R,G,B value\n");
    scanf("%d %d %d", &a, &b, &d);

    white = (a / 255, b / 255, c / 255);

    c = (white - a / 255) / white;
    m = (white - b / 255) / white;
    y = (white - c / 255) / white;
    black = (1 - white);

    printf("value of R is %d\n", c);
    printf("value of G is %d\n", m);
    printf("value of B is %d\n", y);
    printf("value of black is %d", black);
    return 0;
}



//using function
//void RGB(int a,int b,int c);
//#include<stdio.h>
//int main(){
//	int r,g,b;
//	printf("Enter r");
//	scanf("%d",&r);
//	printf("Enter g");
//	scanf("%d",&g);
//	printf("Enter b");
//	scanf("%d",&b);
//	RGB(r,g,b);
//	return 0;
//}
//
//
//void RGB(int a,int b,int d){
//	int white,c,m,y,k;
//	white=(a/255,b/255,d/255);
//	
//	c=(white-a/255)/white;
//	m=(white-b/255)/white;
//	y=(white-d/255)/white;
//	k=(1-white);
//	
//	printf("value of c is %d",c);
//	printf("value of m is %d",m);
//	printf("value of y is %d",y);
//	printf("value of k is %d",k);
//}
