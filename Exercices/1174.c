#include <stdio.h>

//1174
int main(){
    int n, i;
    float num[100];
    for(i=0;i<100;i++){
        scanf("%f", &num[i]);
    }

    for(n=0;n<100;n++){
        if(num[n]<=10){
            printf("A[%d] = %.1f\n", n, num[n]);
        }
    }
    return 0;
}
