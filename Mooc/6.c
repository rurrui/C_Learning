#include <stdio.h>

int main(){
    int a;
    int b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    printf("0.");

    int divident=a;   //������
    int divisor=b;    //����
    int quotient;   //��
    int remainder;  //����
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
