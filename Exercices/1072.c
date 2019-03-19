#include <stdio.h>

//1072
int main(){
    int v, q=0, i, x;
    scanf("%d", &x);

    for(i=0; i<x; i++){
        scanf("%d", &v);
        if(v>=10 && v<=20){
            q++;
        }
    }
    printf("%d in\n", q);
    printf("%d out\n", x-q);
    return 0;
}
