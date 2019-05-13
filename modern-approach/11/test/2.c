#include <stdio.h>

int main(void){
    int i;
    int *j;
    j=&i;
    i=2;
    *j=9;
    printf("%d\n",*j);
    printf("%d\n",i);
    return 0;
}
