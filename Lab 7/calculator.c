#include<stdio.h>

int main(){
	
	int n;
	float a,b,sum,sub,multiplication,divition;
	
	printf("Enter n=1 for sum\n Enter n=2 for sub\n Enter n=3 for multyply\n Enter n=4 for divide n: ");
	scanf("%d", &n);
	
	switch(n){
		
		printf("Enter value of a: ");
		scanf("%f", &a);
		printf("Enter value of b: ");
		scanf("%f", &b);
		
		case 1: printf("Enter value of a: ");
				scanf("%f", &a);
				printf("Enter value of b: ");
				scanf("%f", &b);
				sum = a + b;
				printf("Sum is %0.2f", sum);
				break; 
				
	 	case 2: printf("Enter value of a: ");
				scanf("%f", &a);
				printf("Enter value of b: ");
				scanf("%f", &b);
				sub = a - b;
				printf("Sub is %0.2f", sub);
				break;
				
		case 3: printf("Enter value of a: ");
				scanf("%f", &a);
				printf("Enter value of b: ");
				scanf("%f", &b);
				multiplication = a * b;
				printf("Multyplication is %0.2f", multiplication);
				break;
				
		case 4: printf("Enter value of a: ");
				scanf("%f", &a);
				printf("Enter value of b: ");
				scanf("%f", &b);
				divition = a / b;
				printf("Sum is %0.2f", divition);
				break;
				
		default: printf("Enter Number between 1 to 4");
	}
	return 0;	
}