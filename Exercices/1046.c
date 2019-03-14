#include <stdio.h>

//1046
int main(){
    int start, finish, res;
    scanf("%d %d", &start, &finish);
    if(start >= finish){
        start = 24 - start;
        res = start + finish;
    }
    else{
        start = 24 - start;
        finish = 24 - finish;
        res = start - finish;
    }


    printf("O JOGO DUROU %d HORA(S)\n", res);

    return 0;
}
