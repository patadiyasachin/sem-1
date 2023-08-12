#include<stdio.h>
int main(){
  int i=1;
	while(i<=10){
		if(i%2!=0){
			printf(" odd no between 1 to 10 = %d\n",i);
		}
		i++;
	}
	printf("Exiting programe");
	return 0;
}
