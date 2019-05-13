#include <stdio.h>

void test(int a,int *b,int c){
    *b=a;
    c=a+*b;
    printf("%d\n",c);
    printf("the address of c is :%p\n",&c);
}

int main(void){
    int i,j;
    printf("the address of j is : %p\n",&j);
    test(3,&i,j);
    printf("%d %d\n",i,j);
    return 0;
}
/*As the result of i and j ,it is only useful to change the value i or j by use "&".When we pass a parameter by j than do not use "&",it just can not change the value of j*/
