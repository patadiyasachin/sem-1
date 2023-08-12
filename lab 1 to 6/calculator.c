//#include<stdio.h>
//int main(){
//	float a,b,add;
//	char ch;
//	
//	printf("choose any one +,-,*,/ ");
//	scanf("%c",&ch);
//			
//	printf("Enter first no.");
//	scanf("%f",&a);
//	
//	printf("Enter second no.");
//	scanf("%f",&b);
//
//	
//	switch (ch) {
//				case '+':
//				printf("addition=%f",a+b);
//				break;
//			
//				case '-':
//				printf("substraction=%f",a-b);
//				break;
//				
//				case '*':
//				printf("multiplication=%f",a*b);
//				break;
//				
//				case '/':
//				printf("devidation=%f",a/b);	
//        		break;
//        		
//        		default:
//        			printf("Enter valid operator");
//        }
//        	
//}


//with function 

void calc(float x,float y);

#include<stdio.h>

int main(){
	float a,b;
	char ch;
	printf("Enter first No.");
	scanf("%f",&a);
	
	printf("Enter second No.");
	scanf("%f",&b);

	calc(a,b);
	return 0;
}


void calc(float x,float y)
{
	char ch;

	switch(ch)
	{
		case '+':
		{
			printf("sum = %f ",x+y);
			break;
		}
		
		case '-':
		{
			printf("substaction = %f ",x-y);
			break;
		}
		
		case '*':
		{
			printf("sum = %f ",x*y);
			break;
		}
		
		case '/':
		{
			printf("sum = %f ",x/y);
			break;
		}
		
		default:{
			printf("Enter valid operator");
			break;
		}
	}
}


//some mistake
