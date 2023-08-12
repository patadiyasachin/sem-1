#include<stdio.h>
int main(){
    int a,b,c,d,e;
    float per;
    printf("Enter 1 subject mark:\n");
    scanf("%d",&a);

    printf("Enter 2 subject mark:\n");
    scanf("%d",&b);

    printf("Enter 3 subject mark:\n");
    scanf("%d",&c);

    printf("Enter 4 subject mark:\n");
    scanf("%d",&d);

    printf("Enter 5 subject mark:\n");
    scanf("%d",&e);

    per=(a+b+c+d+e)/5;

    printf("percentage=%.2f",per);

    if (per<=35)
    {
        printf("\nfail!!");
    }

    else if (per>=35 && per<=45)
    {
        printf("\nthird cladd mark");
    }

    else if (per>=45 && per<=60)
    {
        printf("\nsecond class mark");
    }

    else if(per>=60 && per<=70)
    {
        printf("\nfirst class mark");
    }
    
    else
    {
      printf("\nvery good");
    }

    return 0;

}