#include <stdio.h>
#include <ctype.h>

int main()
{
    int a[100] = {0};
    int b[100] = {0};
    int x;       //x的指数
    int y;       //x的系数
    int cnt = 0; //计算次数为0的次数
    int dis = 0;

    int ret = 1;
    char mes;
    while (ret)
    {
        scanf("%d %d", &x, &y);
        if (dis == 0)
        {
            a[x] = y;
        }

        if (dis)
        {
            b[x] = y;
            if (x == 0)
            {
                break;
            }
        }
        if (x == 0)
        {
            dis = 1;
        }
    }
    int sum = 0;
    int total=0;
    for (int i = 99; i > -1; i--)
    {
        sum = a[i] + b[i];
        total+=sum;
        if (sum != 0)
        {
            if (i == 0)
            {
                printf("%d\n", sum);
            }
            else
            {
                if (i == 1)
                {
                    if (sum == 1)
                    {
                        printf("x");
                        printf("+");
                    }
                    else
                    {
                        printf("%d", sum);
                        printf("x");
                        printf("+");
                    }
                }
                else
                {
                    if (sum == 1)
                    {
                        printf("x");
                        printf("%d", i);
                        printf("+");
                    }
                    else
                    {
                        printf("%d", sum);
                        printf("x");
                        printf("%d", i);
                        printf("+");
                    }
                }
            }
        }
        
    }
    if(total==0){
        printf("0\n");
    }
    return 0;
}
