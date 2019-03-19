#include <stdio.h>

//1070
int main(){
    int numb, i, q = 0;
    scanf("%d", &numb);
    for(i=numb;q!=6; i++){
        if(i%2!=0){
            printf("%d\n", i);
            q++;
        }
    }
    return 0;
}
