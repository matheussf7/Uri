#include <stdio.h>

//1182
int main(){
    float m[12][12], soma = 0;
    char opt;
    int i, j, c,  n;

    scanf("%d", &n);
    scanf(" %c", &opt);
    fflush(stdin);
    for(j=0;j<12;j++){
        for(c=0;c<12;c++){
            scanf("%f", &m[j][c]);
        }
    }

    for(i=0;i<12;i++){
        soma = soma + m[i][n];
    }
    if(opt == 'S'){
        printf("%.1f\n", soma);
    }
    else if(opt == 'M'){
        printf("%.1f\n", soma/12);
    }

    return 0;
}
