#include<stdio.h>
int main(){
	int m,n;
	printf("Enter a ");
	scanf("%d",&m);
	
	printf("Enter b ");
	scanf("%d",&n);
	
	swap(m,n);
	swap(&m,&n);
	
	printf(" call by value %d %d ",m,n);
	printf(" call by refrence %d %d ",m,n);
return 0;
}

int swap(int a, int b){
	int temp,*p,*ptr;
	temp=*p;
	*p=*ptr;
	*ptr=temp;
	
}

