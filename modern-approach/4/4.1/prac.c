#include <stdio.h>

int main(void){
    int i=5,j=3;
    printf("%d %d\n",i/j,i%j);

    i=2,j=3;
    printf("%d\n",(i+10)%j);

    int k=9;
    i=7,j=8;
    printf("%d\n",(i+10)%k/j);

    i=1,j=2,k=3;
    printf("%d\n",(i+5)%(j+2)/k);

    printf("====================================================");
    printf("\n");
    printf("%d\n",8/5);

    printf("%d\n",-8/5);

    printf("%d\n",8/-5);

    printf("%d\n",-8/-5);

    printf("%d\n",8%5);

    printf("%d\n",-8%5);

    printf("%d\n",8%-5);
    
    printf("%d\n",-8%-5);
    return 0;
}
