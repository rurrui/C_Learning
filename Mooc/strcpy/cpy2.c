#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *mycpy(char *des, const char *src)
{
    char *bk=des;
    while (*src)
    {
        *des++ = *src++;
    }
    *des='\0';
    return bk;
}

int main()
{
    char *src="wdnm";
    char *des=malloc(strlen(src)+1);

    char *des2=mycpy(des,src);

    for (size_t i = 0; i < strlen(src); i++)
    {
        putchar(des2[i]);
    }
    

    return 0;
}