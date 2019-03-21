#include <stdio.h>
#include <math.h>

//1143
int main(){
    int n, i, sq, cb;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sq = pow(i, 2);
        cb = pow(i, 3);
        printf("%d %d %d\n", i, sq, cb);
    }
    return 0;
}
