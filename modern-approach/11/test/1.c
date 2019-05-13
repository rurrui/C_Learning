#include <stdio.h>

int main(void){
    int *p,i=1;
    p=&i;
    printf("%d",*p);
    return 0;
}
