#include<stdio.h>
int main()
{
	int n;
	printf("Enter Element No.");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		printf("Enter Element");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]=a[i]+1){
			printf("%d",a[i]);
		}
		else{
			printf("missing no=%d ",a[i]);	
		}
	}
	
	return 0;
}

