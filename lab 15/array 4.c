#include<stdio.h>
int main(){
	int n,search;
	printf("Enter Element size : ");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0;i<n;i++){
		printf("Enter Element: ");
		scanf("%d",&a[i]);
	}
	
	printf("Enter search Element: ");
	scanf("%d",&search);
	
	for(i=0;i<n;i++){
		if(search==a[i]){
		printf("correct element");
		break;
	}
		
		else{
			printf("\nincorrect element");
		}
	}
		
	
	return 0;
}
