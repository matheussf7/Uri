#include <stdio.h>

//1047
int main(){
    int shour, fhour, sminute, fminute, res, res2;
    scanf("%d %d %d %d", &shour,&sminute, &fhour, &fminute);
    if(shour >= fhour){
        shour = 24 - shour;
        res = shour + fhour;
    }
    else{
        if(sminute < fminute){
            shour = 24 - shour;
            fhour = 24 - fhour;
            res = shour - fhour;
            sminute = 60 - sminute;
            fminute = 60 - fminute;
            res2 = sminute - fminute;
        }
        else{
            res = 0;
            res2 = fminute - sminute;
        }
    }

    printf("O JOGO DUROU %d HORA(S) e %d MINUTO(S)\n", res, res2);

    return 0;
}
