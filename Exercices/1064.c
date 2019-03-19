#include <stdio.h>

//1064
int main(){
    float sum, v;
    int i, q=0;

    for(i=0;i<6;i++){
        scanf("%f", &v);
        if(v > 0){
            sum = sum + v;
            q++;
        }
    }
    printf("%d valores positivos\n", q);
    printf("%.1f\n", (sum/q));


    return 0;
}
