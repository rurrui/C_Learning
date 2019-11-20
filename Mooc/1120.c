#include <stdio.h>

void change(char *s){
    s[0]='z';
}
int main(){
    char s[]="hello";
    printf("%p\n",s);
    change(s);
    printf("%c",s[0]);
    return 0;
}
//char *s,the string that s point can't be changed ,if u want a changeble string ,u must define it by array