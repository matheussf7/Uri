#include <stdio.h>

//1177
int main(){
    int t, i, num[1000], c = 0;
    scanf("%d", &t);
    for(i=0;i<1000;i++){
        num[i] = c;
        printf("N[%d] = %d\n", i, num[i]);
        c++;
        if(c == t){
            c = 0;
        }
    }

    return 0;
}
