#include <stdio.h>
#define N 5

void avg_sum(int a[],int n,double *avg,double *sum);

int main(void){
    int a[N]={1,2,3,4,5};
    double avg,sum;
    avg_sum(a,N,&avg,&sum);

    printf("the sum is %f\n the avg is %f\n",sum,avg);
    return 0;
}

void avg_sum(int a[],int n,double *avg,double *sum){
    int i;
    *sum=0;
    for(i=0;i<N;i++){
        *sum+=a[i];
    }

    *avg=*sum/n;
}
