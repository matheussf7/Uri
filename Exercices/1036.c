#include <stdio.h>
#include <math.h>

//1036
int main(){
    float a, b, c, delta, r1, r2;

    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - (4 * a * c);

    r1 = (-b + (sqrt(delta)))/(2*a);
    r2 = (-b - (sqrt(delta)))/(2*a);

    if(a != 0 && delta > 0){
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }
    else{
        printf("Impossivel calcular\n");
    }

    return 0;
}
