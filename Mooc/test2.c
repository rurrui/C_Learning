#include <stdio.h>
int main(void)
{
    int i = 0;
    char a;
    while (1)
    {
        scanf("%c", &a);
        if (a == '.')
        {
            if (i != 0)
            { //如果i=0;说明没有输入
                printf("%d", i);
            }
            printf("\n");
            break;
        }
        if (a == ' ')
        {
            if (i != 0)
            {
                printf("%d ", i);
                i = 0;
            }
        }
        else
        {
            i += 1;
        }
    }
    return 0;
}
