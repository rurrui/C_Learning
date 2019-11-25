#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char a[10000];
    char *b = (char *)malloc(10000);
    int i = 0;
    int j = 0;
    while ((a[i++] = getchar()) != '\n')
        ;
    a[i - 1] = '\0';
    a[i] = '\0';
    while ((b[j++] = getchar()) != '\n')
        ;
    b[j-1]='\0';
    b[j] = '\0';

    //int idx1 = 0;
    int idx2 = 0;
    int cnt = 0;
    char *p;
    
    while (*b != '\0')
    {
        char *temp = b;
        p = strstr(b, a);
        if(p==NULL){
            if(cnt==0){
                printf("%d",-1);
            }
            
            break;
        }
        b = p;
        //idx1++;
        if (p == NULL)
        {
            b++;
        }
        else
        {
            if (cnt > 0)
            {
                idx2 += strlen(temp) - strlen(p) + 1;
                printf("%d ", idx2);
                b++;
            }
            else
            {
                idx2 = strlen(temp) - strlen(p);
                printf("%d ", idx2);
                b++;
                cnt++;
            }
        }
    }

    //printf("a:%s b:%s p:%s idx:%d", a, b, p, idx);

    return 0;
}