#include <stdio.h>
void reverse_num(int num);

int main(void){
    int num;
    printf("please enter a integer:\n");
    scanf("%d",&num);
    reverse_num(num);

    return 0;
}

void reverse_num(int num){
    int a,b;
    a=num%10;
    b=num/10;
    printf("%d%d\n",a,b);
}
