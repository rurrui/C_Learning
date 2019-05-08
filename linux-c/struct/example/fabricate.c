#include <math.h>
#include "common.h"

struct complex_struct make_from_real_img(double x, double y){
    struct complex_struct z;
    z.t=RECTANGULAR;
    z.x=x;
    z.y=y;
    return z;
}

struct complex_struct make_from_mag_ang(double r,double A){
    struct complex_struct z;
    z.t=POLAR;
    z.x=r*cos(A);
    z.y=r*sin(A);
    return z;
}
