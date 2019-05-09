#include <stdio.h>

int main(void){
    int a[3]={1,2,3};
    int b[3];
    int i;
    for(i=0;i<3;i++){
        b[i]=a[i];
        printf("b:%d\n",b[i]);
    }
    
    return 0;
}
