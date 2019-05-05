#include <stdio.h>

int main(void){
    int i,j;
    i=1;
    j=i+=1;
    printf("the i+=1 :%d\n",j);
    i=1;
    j=i++;
    printf("the i++: %d\n",j);
    i=1;
    j=++i;
    printf("the ++i: %d\n",j);
    
    return 0;
}
