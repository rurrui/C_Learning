#include <stdio.h>
#include "reserve.h"

int sum=0,rem;
int reserve_num(int num){
    if(num){
        rem=num%10;
        sum=sum*10+rem;
        reserve_num(num/10);
    }

    else{
        return sum;
    }
    return sum;
}
