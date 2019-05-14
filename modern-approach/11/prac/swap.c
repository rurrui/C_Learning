#include <stdio.h>

void swap(int *p,int *q);

int main(void){
    int i=10;
    int j=20;
    swap(&i,&j);
    printf("i :%d\nj :%d\n",i,j);

    return 0;
}

void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
