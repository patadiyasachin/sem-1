//#include<stdio.h>
////avg without scanf
//int main()
//{
//	float a=5,b=6,c=7,d;
//	printf("Enter three No.\n %.2f,%.2f,%.2f\n",a,b,c);
//	
//	d=(a+b+c)/3;
//	
//	printf("avg is=%f",d);
//	
//}


//with function
int average(int x, int y, int z);

  #include<stdio.h>
    int main(){
	int a=10,b=20,c=30,d;
	d=int average(a,b,c);
	printf("answer = %d ",d);
	return 0;
}


int average(int x, int y, int z){
	int ans;
	ans=(x*y*z)/3;
	return ans;
}

