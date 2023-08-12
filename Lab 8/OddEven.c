#include<stdio.h>
int main(){
    int i=1,Co,Ce,n;
    while (i<=10)
    {
        printf("Enter no.");
        scanf("%d",&i);
        i++;

            if (i%2==0) {
            Ce++;
            
            
        }

        else{
            Co++;
            
        }
    }
    printf("odd no=%d\n",i);
    printf("enen no=%d\n",i);
    printf("total odd no=%d\n",Co);
    printf("total enen no=%d\n",Ce);

return 0;
}
