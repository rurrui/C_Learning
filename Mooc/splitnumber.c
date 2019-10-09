#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x); //input a number
    int t=x;    //replace x for get a consistent x
    int mask = 1;    //
    /*calc the numebr digits*/
    while (t > 9)
    {
        t /= 10;
        mask *= 10;
    }

    // 12345 10000 1 12345%10000
    // 2345  1000  2 2345%1000
    // 345   100   3 345%100
    // 45    10    4 45%10
    // 5     1     5 5%10
    // 0
    while (mask > 0)
    {
        int d = x / mask;
        printf("%d",d);
        if(mask>9){
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    }
    printf("ending");
    return 0;
}