#include <stdio.h>

void change(int *p);

void change_by_address(int *p);

int main(void){
    int i=1;
    int j=2;
    printf("real i address is %p\n",&i);
    change(&i);
    printf("the swapped address is %p\n",&i);
    printf("i is : %d\n",i);
    printf("======================================================\n");
    printf("previous value of j is:%d\n",j);
    printf("previous address of j is:%p\n",&j);
    change_by_address(&j);
    printf("after value of j is:%d\n",j);
    printf("after address of j is:%p\n",&j);
    return 0;
}

void change(int *p){
    int j=5;
    printf("swap address is :%p\n",&j);
    p=&j;
    printf("the swapped value in change method is %d\n",*p);
}

void change_by_address(int *p){
    int j=10;
    *p=j;
    printf("the swapped address by change by address is :%p\n",p);
}
/*在C语言中,参数传值会复制一份副本,所以通过调用一个方法并不能改变参数的实际值.
所以我们需要传递这个参数的引用(既:地址),
在方法中使用*p=xxx的形式可以直接改变当前引用所指向的内存的当前值,
所以这样就可以通过传参数改变其实际参数真实的值.但是如果你使用p=&xxx,
这种方式是不能改变实际参数的值的,看起来似乎改变了参数p的指向的内存地址,
实际上这个引用只是一份copy,当你返回调用他的方法内时,没有任何改变*/
