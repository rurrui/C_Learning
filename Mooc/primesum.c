#include <stdio.h>

// ��������
int main()
{

    int n; //��ʼ����
    int m; //��ֹ����
    scanf("%d %d", &n,&m);
    
    int sum = 0;

    int x = 2;
   
    int cnt = 0;
    while (cnt<=m)
    {
        int isPrime = 1;    //2Ϊ������������ʼֵx����Ҫ����forѭ���ж�
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
            cnt++;  //�����ǰ����Ϊ������ʼ����
            if(cnt>=n && cnt<=m){
                sum+=x;
            }
        }
        x++;
    }
    printf("%d",sum);

    return 0;
}