#include <stdio.h>

//1149
int main(){
    int a, n, i, c=0, sum = 0;

    scanf("%d %d", &a, &n);
    while(n<=0){
        scanf("%d", &n);
    }
    for(i=a;c<n;i++){
        c++;
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
