#include <stdio.h>
#include <stdlib.h>
#define N 20

#define boolean int
#define true 1
#define false 0

int a[N];

void gen_random(int upper_round){
    int i;
    for(i=0;i<N;i++){
        a[i]=random() % upper_round;
    }
}

int main(void){
    int i,histogram[10]={0};
    gen_random(10);
    for(i=0;i<N;i++){
        histogram[a[i]]++;
    }
    printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",0,1,2,3,4,5,6,7,8,9);
    boolean isEnd=true;
    while(isEnd){
        isEnd=false;
        for(i=0;i<10;i++){
            if(histogram[i]-->0){
                printf("%s  ","*");
                if(histogram[i]>0){
                    isEnd=true;
                }
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
}
