//#include<stdio.h>
//int main(){
//	int n,i=1,sum=0;
//	
//	printf("Enter No.");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		sum=sum+i;
//	}
//	
//	printf("sum=%d",sum);
//	
//return 0;
//}

#include<stdio.h>
int main(){
	int n,ans;
	printf("Enter No.");
	scanf("%d",&n);
	ans=sum(n);
	printf("answer=%d",ans);
}

int sum(int a){
	int sum=0,i;
	for(i=1;i<=a;i++){
		sum=sum+i;
	}
	return sum;
}
