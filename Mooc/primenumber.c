#include <stdio.h>

// ���ǰ50������
int main()
{
    int x = 2;       //��2��ʼ
    int cnt = 0;
    while (cnt < 50)
    {
        int isPrime = 1; //������ǣ���ʼ����Ϊ2�����һ������isPrimeΪ1
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break; //���x��������1�����������0��˵����������������isPrime��Ϊ0
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