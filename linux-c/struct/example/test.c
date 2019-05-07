#include <stdio.h>
#include "get_x_y.h"
#include "common.h"
#include "arithmetic.h"
#include "fabricate.h"

int main(void){
    struct complex_struct z1={1,1};
    struct complex_struct z2={3,4};
    
    struct complex_struct z3=add_complex(z1,z2);
    struct complex_struct z4=mul_complex(z1,z2);

    printf("%f %f\n",real_part(z4),img_part(z4));
    return 0;
}
