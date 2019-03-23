#include <stdio.h>

//1157
int main(){
    int i, c;
    scanf("%d", &c);
    for(i=1;i<=c;i++){
        if(c%i==0){
            printf("%d\n", i);
        }
    }
    return 0;
}