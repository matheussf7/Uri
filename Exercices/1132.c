#include <stdio.h>

//1132
int main(){
    int sum = 0, n1, n2, i, higher, lower;
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
    for(i=lower;i<=higher;i++){
        if(i % 13 != 0){
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
