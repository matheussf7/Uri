#include <stdio.h>

//1151
int main(){
    int n, i, first = 0, second = 1, third, aux=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        third = first + second;
        printf("%d", first);
        first = second;
        second = third;
        if(i == n){
            putchar('\n');
        }
        else{
            putchar(' ');
        }
    }

    return 0;
}
