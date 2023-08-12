#include<stdio.h>
int main(){
    int n ,i,m,flag=0;
    printf("Enter no.");
    scanf("%d",&n);

    m=n/2;
     if (n==0||n==1)
     {
        flag=1;
     }

     for ( i=2; i <= m; ++i)  
     {
        if (n%i==0)
        {
            flag=1;
            break;
        }

     }

     if (flag=0)
     {
        printf("no is prime");
     }

    else
     {
        printf("no is not prime");
     }

}