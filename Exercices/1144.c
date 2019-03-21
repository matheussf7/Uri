#include <stdio.h>

//1144
int main(){
    int n, c, j = 1, aux = 1, aux1 = 0, aux2 = 0, i;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j;aux1<2;j++){
            aux1++;
            printf("%d %d %d\n", i, j, aux);
            aux++;
        }
        if(i==1) aux = j * (i);
        aux1 = 0;
        j++;
        j = j + 2*aux2;
        aux2++;
        aux = j * (i+1);

    }
    return 0;
}
