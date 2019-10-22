#include <stdio.h>

int getMax(int num[], int count)
{
    int maxid = 0;
    for (int i = 1; i < count; i++)
    {
        if (num[i] > num[maxid])
        {
            maxid = i;
        }
    }
    return maxid;
}
int main()
{
    int nums[] = {3, 65, 88, 1, 34, 6, 88, 33, 76, 22, 88, 3};
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = length - 1; i > 0; i--)
    {
        int max = getMax(nums, i+1);
        int temp = nums[max];
        nums[max] = nums[i];
        nums[i] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d\t", nums[i]);
    }

    return 0;
}