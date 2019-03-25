#include <stdio.h>

//1164
int main(){
    int i, c, n1=1, n2=0, sum = 0;
    scanf("%d", &n1);
    for(i=0;i<n1;i++){
        sum = 0;
        scanf("%d", &n2);
        for(c=1;c<n2;c++){
            if(n2%c==0){
                sum = sum + c;
            }
        }
        if(n2 == sum) printf("%d eh perfeito\n", n2);
        else printf("%d nao eh perfeito\n", n2);
    }
    return 0;
}
