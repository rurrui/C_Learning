#include <stdio.h>
#include "reserve.h"

int main(void){
    int num;
    printf("please input a integer:\n");
    scanf("%d",&num);
    int a=reserve_num(num);
    printf("%d\n",a);
    return 0;

}
