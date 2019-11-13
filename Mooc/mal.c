#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    int number;
    scanf("%d",&number);
    a=(int*)malloc(number*sizeof(int));
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = number-1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    free(a);
    
    return 0;
}