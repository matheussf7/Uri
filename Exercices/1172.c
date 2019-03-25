#include <stdio.h>

//1172
int main(){
    int num[10], i;
    for(i=0;i<10;i++){
        scanf("%d", &num[i]);
        if(num[i] <= 0){
            num[i] = 1;
        }
        printf("X[%d] = %d\n", i, num[i]);
    }

    return 0;
}
