#include<stdio.h>
int main()
{
	int n;
	printf("Enter no of element");
	scanf("%d",&n);
	
	int a[n],i,min;
	for(i=0;i<n;i++){
		printf("Enter element");
		scanf("%d",&a[i]);
	}

	
	return 0;
}

