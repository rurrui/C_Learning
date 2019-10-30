#include <stdio.h>

int main()
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1];
    printf("the address of a%p\n",&a);
    printf("the address of p%p\n",p);

    printf("p[0] %p\n",p);
    printf("p[1] %p\n",&p[1]);
    printf("p[2] %p\n",&p[2]);
    printf("value[0] p is %d\n",*p);
    printf("value[1] p is %d\n",p[1]);
    printf("value[2] p is %d\n",p[2]);
    return 0;
}