#include <stdio.h>

int search(int x, int num[], int count)
{
    int left = 0;          //������˵�����
    int right = count - 1; //�����Ҷ˵�����
    int mid = (left + right) / 2;
    int ret = -1; //x�������е�λ��
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
    printf("%d��λ���ڣ�%d��", x, position);
    return 0;
}