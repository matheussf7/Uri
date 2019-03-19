#include <stdio.h>

//1060
int main(){
    float n;
    int i, c;
    c = 0;
    for(i=0;i<6;i++){
        scanf("%f", &n);
        if(n > 0){
            c++;
        }
    }
    printf("%d valores positivos\n", c);
    return 0;
}
