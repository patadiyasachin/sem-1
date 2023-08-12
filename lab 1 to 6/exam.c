#include<stdio.h>
int main(){
int a,n,x;
printf("enter n: ");
scanf("%d", &n);

while(n>0){
    x=n%10;
    n=n/10;
    printf("%d", x);
}
return 0;
}