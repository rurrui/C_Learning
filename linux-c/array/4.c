//实现数组的全排列
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[3]={1,2,3};
    int b=sizeof(a);
    int c=sizeof(a)/sizeof(a[0]);
    printf("%d %d\n",b,c);
    return 0;
}
