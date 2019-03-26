#include <stdio.h>

//1179
int main(){
    int i, j, n1 = 0, n2 = 0, c[15], par[5], impar[5];
    for(i=0;i<15;i++){
        scanf("%d", &c[i]);
        if(c[i] % 2 == 0){
            par[n1] = c[i];
            n1++;
        }
        else{
            impar[n2] = c[i];
            n2++;
        }
        if(n1 == 5){
            for(j=0;j<5;j++){
                printf("par[%d] = %d\n", j, par[j]);
                n1 = 0;
            }
        }
        else if(n2 == 5){
            for(j=0;j<5;j++){
                printf("impar[%d] = %d\n", j, impar[j]);
                n2 = 0;
            }
        }
        else if(i == 14){
            for(j=0;j<n2;j++){
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            for(j=0;j<n1;j++){
                printf("par[%d] = %d\n", j, par[j]);
            }
        }
    }
    return 0;
}
