#include <stdio.h>

//1175
int main(){
    int i, j, c=0, n1[20], n2[20];

    for(i=0;i<20;i++){
        scanf("%d", &n1[i]);
    }

    for(j=20;j>0;j--){
        n2[c] = n1[j-1];
        printf("N[%d] = %d\n", c, n2[c]);
        c++;
    }
    return 0;
}
