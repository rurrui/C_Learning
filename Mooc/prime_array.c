#include <stdio.h>

int isPrime(int x, int knowprimes[], int numberofKnowPrime);

int main()
{
    const int number = 100;
    int prime[number] = {2};
    int count = 1;

    int i = 3;
    while (count < number)
    {
        if (isPrime(i, prime, count))
        {
            prime[count++] = i;
        }
        i++;
    }

    for (int i = 0; i < number; i++)
    {
        printf("%d\n",prime[i]);
    }
    
    return 0;
}
int isPrime(int x, int knowprimes[], int numberofknowprime)
{
    int ret = 1;
    for (int i = 0; i < numberofknowprime; i++)
    {
        if (x % knowprimes[i] == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}