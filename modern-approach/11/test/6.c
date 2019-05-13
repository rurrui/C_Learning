#include <stdio.h>
#define N 5

int *find_middle(int a[],int n);

int main(void){
    int a[N]={1,2,3,4,5};
    int *p=find_middle(a,N);
    printf("the middle value is %d\n",*p);
    for(int i=0;i<N;i++){
        printf("%p\n",&a[i]);
    }

    return 0;
}

int *find_middle(int a[],int n){
    return &a[n/2];
}
