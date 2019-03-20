#include <stdio.h>

//1095
int main(){
    int i=1, j=60, c;
    for(c=0;j>=0;c++){
        printf("I=%d J=%d\n", i, j);
        i = i+3;
        j = j-5;
    }
    return 0;
}
