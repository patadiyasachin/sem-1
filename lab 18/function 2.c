#include<stdio.h>
int max_min(int a, int b);
int min(int a, int b);


int main(){
	int m,n,sum;
	printf("Enter a ");
	scanf("%d",&m);
	
	printf("Enter b ");
	scanf("%d",&n);
	
	max(m,n);
	min(m,n);
	
return 0;
}

int max(int a, int b){
	int max,min;
	if(a>b){
		printf("\na is maximum");
	}
	else{
		printf("\nb is maximum");
	}
}

int min(int a, int b){
	if(a>b){
		printf("\nb is minimum");
	}
	
	else{
		printf("\na is minimum");
	}
}

