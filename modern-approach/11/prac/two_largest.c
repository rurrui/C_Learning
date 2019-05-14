#include <stdio.h>
#define N 5

void find_two_largest(int a[],int n,int *largest,int *second_largest);

int max(int a[],int n,int *max);

int main(void){
    int a[N]={1,2,3,4,5};
    int largest,second_largest;
    find_two_largest(a,N,&largest,&second_largest);
    printf("num1:%d\n,num2:%d\n",largest,second_largest);

    return 0;
}


void find_two_largest(int a[],int n,int *largest,int *second_largest){
    int i;
    int b[N];
    int idx=0;
    *largest=0;
    for(i=0;i<n;i++){
        if(a[i]>*largest){
            b[idx++]=*largest;
            *largest=a[i];
        }
    }
    *second_largest=max(b,N,second_largest);
}

int max(int a[],int n,int *maxnum){
    int i;
    *maxnum=0;
    for(i=0;i<n;i++){
        if(a[i]>*maxnum){
            *maxnum=a[i];
        }
    }
    return *maxnum;
}
