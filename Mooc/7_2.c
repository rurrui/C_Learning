#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int array[4][4];
    int a;
    for (int i = 0; i < n; i++)
    {
        if (n==1)
        {
            scanf("%d",&array[0][0]);
            break;
        }
        
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
            //array[i][j] = a;
        }
        //printf("\n");
    }
    int array1[4][2];
    int array2[4][2];

    int columnofrow = 0;
    int tempi;
    int tempj;
    for (int i = 0; i < n; i++)
    {
        if (n==1)
        {
            break;
        }
        
        int max = array[i][0];
        for (int j = 0; j < n; j++)
        {
            if (max <= array[i][j])
            {
                max = array[i][j];
                array1[i][0] = i;
                array1[i][1] = j;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (n==1)
        {
            break;
        }
        
        int min = array[0][i];
        for (int j = 0; j < n; j++)
        {
            if (min >= array[j][i])
            {
                min = array[j][i];
                array2[i][0] = j;
                array2[i][1] = i;
            }
        }
    }
    int ret=0;
    for (int i = 0; i < n; i++)
    {
        if (n==1)
        {
            printf("%d %d\n",0,0);
            break;
        }
        
        for (int j = 0; j < n; j++)
        {
            if(*array1[i]==*array2[j] && array1[i][1]== array2[j][1]){
                printf("%d %d\n",array1[i][0],array2[j][1]);
                ret=1;
            }
        }
    }
    if (ret==0)
    {
        printf("NO\n");
    }
    return 0;
    
}