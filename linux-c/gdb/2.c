#include <stdio.h>
#define N 5

int factorial(int i){
    if(i==1){
        i=1;
        printf("%d\n",i);
        return i;
    }else if(i==2){
        i=1;
        printf("%d\n",i);
        return i;
    }else{
        i=factorial(i-2)+factorial(i-1);
        printf("%d\n",i);
        return i;
    }

}

int main(void){
    factorial(N);
    return 0;
}
