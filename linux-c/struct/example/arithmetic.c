#include "common.h"
#include "get_x_y.h"
#include "fabricate.h"

struct complex_struct add_complex(struct complex_struct z1,struct complex_struct z2){
    return make_from_real_img(real_part(z1)+real_part(z2),img_part(z1)+img_part(z2));
}

struct complex_struct sub_complex(struct complex_struct z1,struct complex_struct z2){
    return make_from_real_img(real_part(z1)-real_part(z2),img_part(z1)-img_part(z2));
}


struct complex_struct mul_complex(struct complex_struct z1,struct complex_struct z2){
    return make_from_mag_ang(magnitude(z1)*magnitude(z2),angle(z1)+angle(z2));
}


struct complex_struct div_complex(struct complex_struct z1,struct complex_struct z2){
    return make_from_mag_ang(magnitude(z1)/magnitude(z2),angle(z1)-angle(z2));
}
