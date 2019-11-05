#include <stdio.h>

int main()
{
    int a; //·Ö×Ó
    int b; //·ÖÄ¸
    scanf("%d/%d", &a, &b);
    while (1)
    {
        if ((a % 2) == 0 && (b % 2) == 0)
        {
            a /= 2;
            b /= 2;
        }
        else if ((a % 3) == 0 && (b % 3) == 0)
        {
            a /= 3;
            b /= 3;
        }
        else if ((a % 5) == 0 && (b % 5) == 0)
        {
            a /= 5;
            b /= 5;
        }
        else if ((a % 7) == 0 && (b % 7) == 0)
        {
            a /= 7;
            b /= 7;
        }else
        {
            break;
        }
        
    }
    printf("%d/%d",a,b);

    return 0;
}