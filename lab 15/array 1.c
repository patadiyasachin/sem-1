#include<stdio.h>
int main(){
	int n;
	printf("Enter size");
	scanf("%d",&n);
	
	int a[n],i,b[n];
	for(i=0;i<n;i++){
		printf("Enter element");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		printf("\n copy element = %d",b[i]);
	}
}
