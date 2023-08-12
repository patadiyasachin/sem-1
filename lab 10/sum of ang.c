#include<stdio.h>
int main(){
	int n,sum=0,count=0;
	double avg;
	while(1){
		printf("Enter no.(0 for stop)");
		scanf("%d",&n);
		if(n==0){
			break;
		}
		sum=sum+n;
		count++;
	}
	avg=sum/(double)count;
	printf("total sum=%d\n total avg=%.2lf",sum,avg);
	return 0;
}
