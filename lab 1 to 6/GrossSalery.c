#include <stdio.h>
int main()
{
    int BS, hra, da, GS;
    printf("Enter basic salery:");
    scanf("%d", &BS);

    if (BS >= 10000)
    {
        hra = BS+(BS * 0.2);
        da = BS+(BS * 0.8);    
    }

    else if (BS >= 20000)
    {
        hra =BS+( BS * 0.25);
        da = BS+(BS * 0.9);       
    }

    else
    {
        hra = BS+(BS * 0.3);
        da = BS+(BS * 0.95);
    }
    GS=BS+hra+da;
    printf("Gross salery=%d",GS);
    printf("\nExiting programe");
}