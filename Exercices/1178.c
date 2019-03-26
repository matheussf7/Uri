#include <stdio.h>

//1178
int main(){
    int i;
    double n[100], num, c;
    scanf("%lf", &num);
    c = num;
    for(i=0;i<100;i++){
        n[i] = c;
        printf("N[%d] = %.4lf\n", i, n[i]);
        c = c/2;
    }
    return 0;
}
