#include <stdio.h>
#include "get_x_y.h"

int main(void){
    struct complex_struct z={1,1};
    double A=manitude(z);
    double B=angle(z);
    printf("%f %f\n",A,B);

    return 0;
}
