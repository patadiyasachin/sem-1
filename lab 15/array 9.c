#include<stdio.h>
int main()
{
	int n;
	printf("Enter Element: ");
	scanf("%d",&n);
	
	int a[n],i,max,ans,ans2;
	
	for(i=0;i<n;i++){
		printf("Enter Element ");
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	for(i=0;i<n;i++){
		if(i==n){
			a[i]>max;		
		}
		ans=a[i];			
	}
	
	max=a[0];
	for(i=0;i<max;i++){
		if(i==n){
			a[i]>max;		
		}
		ans2=a[i];			
	}
	printf("maximum number is %d",ans);
	printf(" \nsecond last maximum number is %d",ans2);	
	return 0;
}

