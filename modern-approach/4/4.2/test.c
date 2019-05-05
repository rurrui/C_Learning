#include <stdio.h>

int main(void){
    int a[100];
    int i=0;
    a[i++]+=2;
    for(int j=0;j<3;j++){
        printf("%d\n",j);
        printf("%d",a[j]);
        printf("\n");
    }
    return 0;
}
