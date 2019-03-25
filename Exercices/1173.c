#include <stdio.h>

//1173
int main(){
    int num[10], i, n;
    scanf("%d", &n);
    for(i=0;i<10;i++){
        if(i == 0){
            num[i] = n;
            printf("N[%d] = %d\n", i, num[i]);
        }
        else{
            num[i] = num[i-1]*2;
            printf("N[%d] = %d\n", i, num[i]);
        }

    }

    return 0;
}
