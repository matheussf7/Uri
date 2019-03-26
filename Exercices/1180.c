#include <stdio.h>

//1180
int main(){
    int n, i, lower, pos;
    scanf("%d", &n);
    int num[n];

    for(i=0;i<n;i++){
        if(i == 0){
            lower = num[i];
        }
        scanf("%d", &num[i]);
        if(num[i]<lower){
            lower = num[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", lower);
    printf("Posicao: %d\n", pos);
    return 0;
}
