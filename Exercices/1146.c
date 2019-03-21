#include <stdio.h>

//1146
int main(){
    int n = 1, i;
    while(n!=0){
        scanf("%d", &n);
        for(i=1;i<=n;i++){
            printf("%d", i);
            if(i == n){
                putchar('\n');
            }
            else{
                putchar(' ');
            }
        }
    }
    return 0;
}
