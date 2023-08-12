#include<stdio.h>

int main(){
	
	int n;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	switch(n){
		
		case 1: printf("Month is January\n Number of days is 31");
				break;
				
	  	case 2: printf("Month is Fabuary\n Number of days is 28");
				break;
				
		case 3: printf("Month is March\n Number of days is 30");
				break;
				
		case 4: printf("Month is April\n Number of days is 31");
				break;
				
		case 5: printf("Month is May\n Number of days is 30");
				break;
				
		case 6: printf("Month is June\n Number of days is 31");
				break;
				
		case 7: printf("Month is July\n Number of days is 30");
				break;
				
		case 8: printf("Month is August\n Number of days is 31");
				break;
				
		case 9: printf("Month is September\n Number of days is 30");
				break;
				
		case 10: printf("Month is Octuber\n Number of days is 31");
				break;
				
		case 11: printf("Month is November\n Number of days is 30");
				break;
				
		case 12: printf("Month is December\n Number of days is 31");
				break;
				
		default: printf("Enter Number between 1 to 31");
		
	}
	return 0;
}