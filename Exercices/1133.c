#include <stdio.h>

//1133
int main(){
    int n1, n2, i, higher, lower;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if(n1>n2){
        higher = n1;
        lower = n2;
    }
    else{
        higher = n2;
        lower = n1;
    }
    for(i=(lower+1);i<higher;i++){
        if(i%5==2 || i%5==3){
            printf("%d\n", i);
        }
    }

    return 0;
}
