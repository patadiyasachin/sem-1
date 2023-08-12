#include<stdio.h>

int main(){
	
	int n;
	
	printf("enter n(1 to 7): ");
	scanf("%d", &n);
	
	switch(n){
	
	case 1: printf("Day is sunday");
			break;
			
	case 2: printf("Day is Monday");
			break;
			
	case 3: printf("Day is Tuesday");
			break;
			
	case 4: printf("Day is Wednesday");
			break;
			
	case 5: printf("Day is Thursday");
			break;
			
	case 6: printf("Day is Friday");
			break;
			
	case 7: printf("Day is Saturday");
			break;
	
	default: printf("Enter number between 1 to 7");	
}
	return 0;			
}