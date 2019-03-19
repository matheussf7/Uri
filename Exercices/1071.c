#include <stdio.h>

//1071
int main(){
    int v1, v2, q, i, higher, lower, sum = 0;
    scanf("%d", &v1);
    scanf("%d", &v2);

    //Higher and Lower Number
    if(v1>v2){
        higher = v1;
        lower = v2;
    }
    else{
        higher = v2;
        lower = v1;
    }

    //Verification

    for(i=lower+1; i<higher; i++){
        if(i%2==1 || i%2==-1){
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
