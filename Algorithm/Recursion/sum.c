#include <stdio.h>
#define N 5

int get_sum(int list[],int n){
    if(n==0){
        return 0;
    }else{
        return get_sum(list,n-1)+list[n-1];
    }
}

int main(void){
    int list[N]={1,2,3,4,5};
    int sum =  get_sum(list,5);
    printf("the sum is %d\n",sum);
    return 0;
}

