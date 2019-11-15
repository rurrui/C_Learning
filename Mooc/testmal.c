#include <stdlib.h>
#include <stdio.h>

int main(){
    void *p;
    int cnt=0;
    int n=100;
    int *a=&n;
    printf("%p\n",sizeof(a));
    while ((p=malloc(100*1024*1024)))
    {
        cnt++;
    }
    printf("alocated %d00M\n",cnt);
    return 0;
}