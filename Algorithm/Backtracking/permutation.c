#include <stdio.h>
#define N 5

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void permutation(int list[],int index,int size){
    int i,j;

    if(index==size){
        for(i=0;i<size;i++){
            printf("%d",list[i]);
        }
        printf("\n");
    }
    else{
       for(j=index;j<size;j++){
        swap(&list[j],&list[index]);
        permutation(list,index+1,size);
        swap(&list[j],&list[index]);
       } 
    }
}

int main(void){
    int a[N]={1,2,3,4,5};
    permutation(a,0,N);
    for(int i=0;i<N;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}
