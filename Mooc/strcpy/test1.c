#include <stdio.h>

int main(){
    int array[]={1,2,3};
    int *a=array;
    for (size_t i = 0; i < 3; i++)
    {
        printf("%d\n",a[i]);
    }
    a[0]=100;           
    printf("%d\n",a[0]);
    char *s1="hello";
    //s1[0]='w';       string can not be changed
    putchar(s1[0]);
    return 0;
}