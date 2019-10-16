#include <stdio.h>

int main(){
    int a;
    int b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    printf("0.");

    int divident=a;   //被除数
    int divisor=b;    //除数
    int quotient;   //商
    int remainder;  //余数
    // int array[200];
    for (int i = 0; i < 200; i++)
    {
     
        divident*=10;
        quotient=divident/divisor;
        remainder=divident%divisor;
        printf("%d",quotient);
        //array[i]=quotient;
        if(remainder==0){
            break;
        }
        divident=remainder;
    }

    // for (int i = 0; i < 200 ; i++)
    // {
    //     printf("%d",array[i]);
    // }
    printf("\n");
    
    
    return 0;
}
