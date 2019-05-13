#include <stdio.h>

int main(void){
    double a=1000/3;
    printf("%10.3f\n",a);
    int b=10;
    printf("%10.3d\n",b);
    printf("%10.7e\n",a);
    printf("%f\n",a);
    printf("%e\n",a);
    printf("%10.2g\n",a);

    return 0;
}
