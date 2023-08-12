#include<Stdio.h>

int main(){
	
	char x;
	
	printf("enter x: ");
	scanf("%c", &x);
	
	x=(x>=65 && x<=90 || x>=97 && x<=122)?printf("entered characater is alphabet"):printf("entered chacater is not alphabet");
	
	return 0;
}
