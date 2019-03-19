#include <stdio.h>

//1067
int main(){
    int numb, i;
    scanf("%d", &numb);
    for(i=0; i<=numb; i++){
        if(i%2!=0){
            printf("%d\n", i);
        }
    }
    return 0;
}
