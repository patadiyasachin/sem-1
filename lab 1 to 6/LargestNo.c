//#include<stdio.h>
//int main(){
//    int a,b,c;
//    printf("Enter first no a.");
//    scanf("%d",&a);
//    
//    printf("Enter second no b.");
//    scanf("%d",&b);
//    
//    printf("Enter third no c.");
//    scanf("%d",&c);
//    
//    if(a>=b){
//    	if(a>=c){
//    		printf("a is greter\n");
//		}
//		
//		else{
//			printf("c is greter\n");
//		}
//	}
//	
//	else if (b>=a) {
//		if(b>=c){
//			printf("b is greter\n");
//		}
//		
//		else{
//			printf("c is greter\n");
//		}
//			
//	}
//	
//	printf("\nexiting programe");
//	return 0;
//}

void greterfromthree(int a ,int b,int c);

#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter three No. ");
	scanf("%d  %d  %d",&a,&b,&c);	
	
	greterfromthree(a,b,c);
	
	return 0;
}


void greterfromthree(int a ,int b,int c){
	
	 if(a>=b){
    	if(a>=c){
    		printf("a is greter\n");
		}
		
		else{
			printf("c is greter\n");
		}
	}
	
	else if (b>=a) {
		if(b>=c){
			printf("b is greter\n");
		}
		
		else{
			printf("c is greter\n");
		}
	
	}        
}
