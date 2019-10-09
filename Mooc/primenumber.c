#include <stdio.h>

// 输出前50个素数
int main()
{
    int x = 2;       //从2开始
    int cnt = 0;
    while (cnt < 50)
    {
        int isPrime = 1; //素数标记，起始数字为2，则第一个数字isPrime为1
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break; //如果x与除自身和1的数相除等于0，说明它不是素数，把isPrime设为0
            }
        }
        if(isPrime){
            printf("%d ",x);
            cnt++;

        }
        x++;
        
    }
    return 0;
}