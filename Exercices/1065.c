#include <stdio.h>

//1065
int main(){
    int v, i, q = 0;
    for(i=0;i<5;i++){
        scanf("%d", &v);
        if(v%2==0){
            q++;
        }
    }
    printf("%d valores pares\n", q);
    return 0;
}
