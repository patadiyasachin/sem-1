#include<stdio.h>

float find_intrest(int a, int b, int c);
int main(){
    int p,r,n;
    float ans;
    
    printf("Enter p ");
	scanf("%d",&p);
	
	printf("Enter r ");
	scanf("%d",&r);
	
	printf("Enter n ");
	scanf("%d",&n);
	
	ans=find_intrest(p,r,n);
	printf("intres=%.2f",ans);

return 0;
}

float find_intrest(int a, int b, int c){
	float ans;
	ans=(a*b*c)/100;
	return ans;
}

