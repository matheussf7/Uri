#include <stdio.h>

int main(){
    int n, i, var;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &var);
        if(var % 2 == 0) printf("0\n");
        else printf("1\n");
    }

    return 0;
}
