#include <stdio.h>

//1183
int main(){
    float m[12][12], soma = 0;
    char opt;
    int i, j, c;

    scanf(" %c", &opt);
    fflush(stdin);
    for(j=0;j<12;j++){
        for(c=0;c<12;c++){
            scanf("%f", &m[j][c]);
            if(j < c){
                soma = soma + m[j][c];
            }
        }
    }

    if(opt == 'S'){
        printf("%.1f\n", soma);
    }
    else if(opt == 'M'){
        printf("%.1f\n", soma/66);
    }

    return 0;
}
