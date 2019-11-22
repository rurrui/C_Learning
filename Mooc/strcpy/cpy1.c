#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mycpy(char *dst,const char *src){
    int idx=0;
    while (src[idx])
    {
        dst[idx]=src[idx];
        idx++;
    }
    dst[idx]='\0';

    return dst;
    
}

int main(){

    char *src="wzhd";
    char *dst=malloc(strlen(src)+1);

    char *s3=mycpy(dst,src);

    for (size_t i = 0; i < strlen(src); i++)
    {
        putchar(s3[i]);
    }
    
    return 0;
}