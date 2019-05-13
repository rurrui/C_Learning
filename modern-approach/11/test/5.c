#include <stdio.h>
#define N 10

void min_max(int a[],int n,int *min,int *max);

int main(void){
    int list[N],i,big,small;
    printf("please enter a number:\n");
    for(i=0;i<N;i++){
        scanf("%d\n",&list[i]);
    }
    min_max(list,N,&small,&big);
    printf("Smallest is %d\n",small);
    printf("Largest  is %d\n",big);
}
void min_max(int a[],int n,int *min,int *max){
    int i;

    *max=*min=a[0];
    for(i=0;i<N;i++){
        if(a[i]>*max){
            *max=a[i];
        }
        else if(a[i]<*min){
            *min=a[i];
        }
    }
}
