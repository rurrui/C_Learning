#include <stdio.h>
#include "common.h"
#include "get_x_y.h"
#include "arithmetic.h"
#include "fabricate.h"

int main(void){
    struct complex_struct z1={RECTANGULAR,1,1};
    struct complex_struct z2={RECTANGULAR,3,4};
    
    struct complex_struct z3=add_complex(z1,z2);
    struct complex_struct z4=mul_complex(z1,z2);

    printf("%f %f\n",real_part(z3),img_part(z3));
    printf("%f %f\n",real_part(z4),img_part(z4));
    return 0;
}
