#include <stdio.h>

//1080
int main(){
    int n, i, higher=0, pos;
    for(i=0;i<100;i++){
        scanf("%d", &n);
        if(n > higher){
            higher = n;
            pos = i+1;
        }
    }
    printf("%d\n%d\n", higher, pos);
    return 0;
}
