#include <stdio.h>
#include <math.h>

//1156
int main(){
    double sum, n1 = 1, n2 = 1, i;
    for(i=1;i<=20;i++){
        printf("%.2lf / %.2lf\n", n1, n2);
        sum = sum + (n1/n2);
        n1 = n1 + 2;
        n2 = pow(2, i);
    }
    printf("%.2lf\n", sum);
    return 0;
}
