#include <stdio.h>

//1066
int main(){
    int v, i, q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    for(i=0;i<5;i++){
        scanf("%d", &v);
        if(v%2==0){
            q1++;
        }
        else{
            q2++;
        }
        if(v>0){
            q3++;
        }
        if(v<0){
            q4++;
        }
    }
    printf("%d valor(es) par(es)\n", q1);
    printf("%d valor(es) impar(es)\n", q2);
    printf("%d valor(es) positivo(s)\n", q3);
    printf("%d valor(es) negativo(s)\n", q4);

    return 0;
}
