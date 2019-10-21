#include <stdio.h>
#include <math.h>

int isPrime(int x);

int main()
{
    int x;
    scanf("%d", &x);

    printf("%d\n",isPrime(x));
    return 0;
}

int isPrime(int x)
{
    
    int ret = 1;
    if (x == 1 || ((x % 2 == 0) && x != 2))
    {
        ret = 0;
    }

    for (int i = 3; i < sqrt(x); i += 2)
    {
        if (x % i == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}