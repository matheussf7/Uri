#include <stdio.h>

//1131
int main(){
    int esc = 1, inter, gremio, c[4] = {0, 0, 0, 0};
    while(esc!=2){
        scanf("%d %d", &inter, &gremio);
        c[3]++;
        if(inter>gremio){
            c[0]++;
        }
        else if(gremio>inter){
            c[1]++;
        }
        else{
            c[2]++;
        }
        while(1){
            printf("Novo grenal (1-sim 2-nao)\n"); scanf("%d", &esc);
            if(esc == 1 || esc == 2){
                break;
            }
        }
    }
    printf("%d grenais\n", c[3]);
    printf("Inter:%d\n", c[0]);
    printf("Gremio:%d\n", c[1]);
    printf("Empates:%d\n", c[2]);
    if(c[0] > c[1]){
        printf("Inter venceu mais\n");
    }
    else if(c[1] > c[0]){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Nao houve vencedor\n");
    }
    return 0;
}
