#include <stdio.h>

//1160
int main(){
    int i, c, n ,pa, pb;
    double g1, g2;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        c = 0;
        pa = 0;
        pa = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while(pa<=pb){
            pa = pa * ((g1/100)+1);
            pb = pb * ((g2/100)+1);
            c++;
            if(c>100){
            printf("Mais de 1 seculo.\n");
            break;
            }
        }
        if(c<=100){
            printf("%d anos.\n", c);
        }
    }
    return 0;
}