#include <stdio.h>

//1145
int main(){
    int qt, n, i, aux = 0;
    scanf("%d %d", &qt, &n);
    for(i=1;i<=n;i++){
        aux++;
        printf("%d", i);
        if(aux == qt){
            putchar('\n');
            aux = 0;
        }
        else{
            putchar(' ');
        }
    }
    return 0;
}
