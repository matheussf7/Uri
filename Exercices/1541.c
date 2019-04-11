#include <stdio.h>
#include <math.h>

//1541
int main(){
    int side1, side2, perc, total, x, aux1;
    while(1){
        scanf("%d", &side1);
        if(side1 == 0) break;
        else{
            scanf("%d %d", &side2, &perc);
            total = (float) side1 * side2;
            x = sqrt((total * 100)/ (perc));
            printf("TOTAL: %d\n", x);
            total = 0;
            x = 0;
        }
    }
    return 0;
}
