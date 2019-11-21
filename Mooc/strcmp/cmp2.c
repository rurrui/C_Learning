/*
    实现strcmp第二个版本
*/
#include <stdio.h>

int mycmp(char *a,char *b){
    int idx=0;
    while (a[idx]==b[idx] && a[idx]!='\0')
    {
        idx++;
        
    }
    return a[idx]-b[idx];
    
}

int main(){
    char a[]="abce";
    char b[]="abc";

    printf("%d\n",mycmp(a,b));

    return 0;

}