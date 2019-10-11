#include <stdio.h>

// 求素数和
int main()
{

    int n; //起始素数
    int m; //终止素数
    scanf("%d %d", &n,&m);
    
    int sum = 0;

    int x = 2;
   
    int cnt = 0;
    while (cnt<=m)
    {
        int isPrime = 1;    //2为素数，所以起始值x不需要进行for循环判断
        for (int i = 2; i < x-1; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            cnt++;  //如果当前数字为素数开始计数
            if(cnt>=n && cnt<=m){
                sum+=x;
            }
        }
        x++;
    }
    printf("%d",sum);

    return 0;
}