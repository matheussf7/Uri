#include <stdio.h>

//1134
int main(){
    int esc, i, c[3] = {0, 0, 0};
    while(esc!=4){
        scanf("%d", &esc);
        if(esc == 1){
            c[0]++;
        }
        else if(esc == 2){
            c[1]++;
        }
        else if(esc == 3){
            c[2]++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", c[0]);
    printf("Gasolina: %d\n", c[1]);
    printf("Diesel: %d\n", c[2]);
    return 0;
}
