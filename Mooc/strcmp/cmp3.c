/*
    strcmp�ĵ������汾��ʹ��ָ��ļ���
*/
#include <stdio.h>

int mylen(char *a, char *b)
{
    while (*a == *b && *a != '\0')
    {
        a++;
        b++;
    }
    return *a - *b;
}

int main()
{

    char a[] = "abc";
    char b[] = " abc";

    printf("%d\n", mylen(a, b));
    return 0;
}