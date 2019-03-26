#include <stdio.h>

//1187
int main(){
    float m[12][12], soma = 0, soma1 = 0;
    char opt;
    int i, j, c, d, num[144];

    for(d=0;d<144;d++){
        num[d] = d+1;
    }

    scanf(" %c", &opt);
    fflush(stdin);
    for(j=0;j<12;j++){
        for(c=0;c<12;c++){
            //PAREI AQUI
            if(j<6 && c<6){
                if(j<c){
                    soma = soma + m[j][c];
                }
            }
            if(j<6 && c>5){
                if(j+c<=10){
                    soma = soma + m[j][c];
                }
            }
        }
    }

    if(opt == 'S'){
        printf("%.1f\n", soma);
    }
    else if(opt == 'M'){
        printf("%.1f\n", (soma)/30);
    }

    return 0;
}
