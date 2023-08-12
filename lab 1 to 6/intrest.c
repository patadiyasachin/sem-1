//simple intrest

#include<stdio.h>

int main()
{
	float p,r,n,intrest;
	printf("Enter p:");
	scanf("%f",&p);
	
	printf("Enter r:");
	scanf("%f",&r);
	
	printf("Enter n:");
	scanf("%f",&n);
	
	intrest=(p*r*n)/100;
	printf("intrest=%.2f",intrest);

	return 0;
	
}
