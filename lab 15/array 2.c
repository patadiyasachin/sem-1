#include<stdio.h>
int main(){
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	
	int a[n],i,count=0;
	for(i=0;i<n;i++){
		printf("Enter Element: ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]<0){
			count=count+1;
		}
	}
	printf("\ntotal negative no = %d ",count);
	return 0;
}
