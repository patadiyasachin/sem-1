#include<stdio.h>

int main(){
	int n,i,max,min,sum=0,avg;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter Element:");
		scanf("%d", &a[i]);
	}
	
	max=a[0];
		for(i=0;i<n;i++){
			if(a[i]>max){
				max=a[i];
			}
		}
	min=a[0];
		for(i=0;i<n;i++){
			if(a[i]<min){
				min=a[i];
			}
		}
		for(i=0;i<n;i++){
			sum=sum+a[i];
		}
		for(i=0;i<n;i++){
			avg=sum/n;
		}
		printf("max is %d\n", max);
		printf("min is %d\n", min);
		printf("sum is %d\n", sum);
		printf("avg is %d", avg);
	}

