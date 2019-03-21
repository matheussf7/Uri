#include <stdio.h>

//1118
int main(){
    float n1=-1, n2=-1;
    int esc = 1;

    while(esc!=2){
        n1 = -1;
        n2 = -1;
        while(n1<0 || n1>10){
                scanf("%f", &n1);
                if(n1<0 || n1>10){
                    printf("nota invalida\n");
                }
        }
        while(n2<0 || n2>10){
                scanf("%f", &n2);
                if(n2<0 || n2>10){
                    printf("nota invalida\n");
                }
        }
        printf("media = %.2f\n", (n1+n2)/2);

        while(1){
                printf("novo calculo (1-sim 2-nao)\n"); scanf("%d", &esc);
                if(esc == 1 || esc == 2){
                    break;
                }
        }
    }

    return 0;
}
