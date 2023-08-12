#include<stdio.h>
int main()
{
	int second,hour,minute,second2;
	printf("Enter second\n");
	scanf("%d",&second);
	
	hour=second/3600;
	printf("Hour=%d\n",hour);
	
	minute=(second%3600)/60;
	printf("minute=%d\n",minute);
	
	second2=((second%3600)%60);
	printf("second=%d;",second2);
	
	printf("\n%d:%d:%d\n(%d hours: %d minute: %d second)",hour,minute,second2,hour,minute,second2);
	
	
}
