/*
    实现strcmp第一个版本
*/
#include <stdio.h>

int mycmp(char *a,char *b){
    int idx=0;
    while (1)
    {
        if (a[idx]!=b[idx])
        {
            break;
        }
        else if (a[idx]=='\0')
        {
            break;
        }
        idx++;
        
    }
    return a[idx]-b[idx];
    
}

int main(){
    char a[]="abc";
    char b[]="abc ";

    printf("%d\n",mycmp(a,b));

    return 0;

}