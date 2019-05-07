#include <stdio.h>
#include <math.h>
#include "common.h"


double real_part(struct complex_struct z){
    return z.x;
}
double img_part(struct complex_struct z){
    return z.y;
}

double magnitude(struct complex_struct z){
    return sqrt(z.x*z.x+z.y*z.y);
}

double angle(struct complex_struct z){
    return atan2(z.y,z.x);
}
