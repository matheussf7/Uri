#include <stdio.h>

//1096
int main(){
    int i=1, j=7, c, aux1=0, aux2=0;
    for(c=1;aux2!=5;c++){
        printf("I=%d J=%d\n", i, j);
        aux1++;
        j--;
        if(aux1 == 3){
            i = i + 2;
            j = 7;
            aux1 = 0;
            aux2++;
        }
    }
    return 0;
}
