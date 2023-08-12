#include<stdio.h>
int main()
{
	int days,year,week,days2 ;
	printf("Enter Days\n");
	scanf("%d",&days);
	
	year=days/365;
	printf("year=%d\n",year);
	
	week=((days%365)/7);
	printf("week=%d\n",week);
	
	days2=((days%365)%7);
	printf("days=%d",days2);
	
	printf("\n(%d year: %d week: %d days)",year,week,days2);
	
}
	
	
	

