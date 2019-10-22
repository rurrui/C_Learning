#include <stdio.h>

int search(int x, int num[], int count)
{
    int left = 0;          //查找左端的索引
    int right = count - 1; //查找右端的索引
    int mid = (left + right) / 2;
    int ret = -1; //x在数组中的位置
    while (left <= right)
    {
        
        if (num[mid] == x)
        {
            ret = mid;
            break;
        }
        else if (num[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        mid=(left+right)/2;
    }
    return ret;
}

int main()
{
    int x = 2;
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count = sizeof(numbers) / sizeof(numbers[0]);

    int position = search(x, numbers, count);
    printf("%d的位置在：%d处", x, position);
    return 0;
}