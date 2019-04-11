#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//1157
int main(){
    int i, j, n=1, aux;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        if(n<=15 && n>=0){
            aux = (pow(2, (n-1)+(n-1)));
            aux = floor(log10(abs(aux))) + 1;
            int matriz[n][n];
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    matriz[i][j] = pow(2,i+j);
                    printf("%*d", aux, matriz[i][j]);
                    if(j==(n-1)){
                        printf("\n");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            putchar('\n');
        }
    }

    return 0;
}
