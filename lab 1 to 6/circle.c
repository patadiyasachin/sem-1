//#include<stdio.h>
//int main(){
//    int a,b,c;
//    printf("Enter a no.");
//    scanf("%d",&a);
//
//    printf("Enter b no.");
//    scanf("%d",&b);
//
//    if(a>b){
//        printf("a is greter\n ");
//    }
//
//    else{
//        printf("b is greter\n");
//    }
//
//    return 0;
//}   

void greter(int a, int b);

#include<stdio.h>
int main(){

	int a,b;

	printf("Enter a: "); 
	scanf("%d",&a);

	printf("Enter b: ");
	scanf("%d",&b);
	
	greter(a,b);
		
}

void greter(int a, int b){
	if(a>b){
		printf("a is greter ");
	}
	
	else{
 		printf("b is greter");		
        }
}
