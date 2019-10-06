#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    int digCount = 1; //tag the digit
    int result;       //binary number
    int powsize = 0;
    scanf("%d", &number);

    while (number > 0)
    {
        int digit = number % 10;
        int isOorEOfdig = digit % 2;         // check odd or even number the digit is
        int isOorEOfdigcount = digCount % 2; // check odd or even number the digcount is
        if (isOorEOfdig && isOorEOfdigcount)
        {
            // indicate both number are odd
            result += 1 * pow(2, powsize);
        }
        else if (!isOorEOfdigcount && !isOorEOfdig)
        {
            // indicate both number are even
            result += 1 * pow(2, powsize);
        }
        else
        {
            result += 0 * pow(2, powsize);
        }
        powsize++;
        digCount++;
        number = number / 10;
    }
    printf("%d",result);
    return 0;
}