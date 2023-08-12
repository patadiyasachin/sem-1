#include<stdio.h>
int main(){
	int i;
	while(i>100 && i<200){
		if(i/7==0){
			printf("no divizable by 7 is %d\n",i);
		}

		else if(i/5!=0){
			printf("no not divezable by 5 is %d\n",i);
		}
		i++;
	}
	return 0;
}
