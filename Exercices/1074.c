#include <stdio.h>

//1074
int main(){
    int quant, n, i;
    scanf("%d", &quant);
    for(i=0;i<quant;i++){

        scanf("%d", &n);
        if(n>0){
            if(n%2==0){
                printf("EVEN POSITIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }
        if(n<0){
            if(n%2==0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
        }
        if(n==0){
            printf("NULL\n");
        }

    }
    return 0;
}
