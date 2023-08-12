#include<stdio.h>
int main(){
	int s,l,n;
	printf("Enter small no.");
	scanf("%d",&s);
	
	printf("Enter large no.");
	scanf("%d",&l);
	n=l-s;
	int a[n],i;
	if(n>0){
		for(i=0;i<n;i++){
			printf("Enter Element: ");
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			if(a[i]%3==0){
				printf("\ndivezable by 3 is %d",a[i]);
			}		
		}
	}
	
	else{
			printf("invalid number");
		}
	
	return 0;
}
