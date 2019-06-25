#include <stdio.h>
#define N 5

void insertion_sort(int list[N]){
    int i,j;
    int len=N-1;
    printf("%d %d %d %d %d\n",list[0],list[1],list[2],list[3],list[4]);
    for(j=1;j<N;j++){
        int key=list[j];
        i=j-1;
        while(i>=0 && list[i]>key){
            list[i+1]=list[i];
            i--;
        }
        list[i+1]=key;
    }
    printf("%d %d %d %d %d\n",list[0],list[1],list[2],list[3],list[4]);
}

int main(void){
    int list[N]={10,3,2,5,6};
    insertion_sort(list);
    return 0;
}
