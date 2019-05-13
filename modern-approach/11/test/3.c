#include <stdio.h>

int main(void){
    int i=1;
    int *p;
    p=&i;
    printf("%p\n",&i);
    printf("the address of p is: %p\n",p);
    return 0;
}
