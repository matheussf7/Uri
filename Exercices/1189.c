#include <stdio.h>

//1189
int main(){
    double m[12][12], soma = 0, soma1 = 0;
    char opt;
    int i, j;

    scanf("%c", &opt);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &m[i][j]);
            if((i > j) && (j > 5) && (i <= 5)){
                soma = soma + m[i][j];
            }
            if((i + j <= 10) && (j<=5) && (i > 5)){
                soma1 = soma1 + m[i][j];
            }
        }
    }

    if(opt == 'S'){
        printf("%.1lf\n", soma+soma1);
    }
    else if(opt == 'M'){
        printf("%.1lf\n", (soma+soma1)/30);
    }

    return 0;
}
