#include <stdio.h>

//1040
int main(){
    float n1, n2, n3, n4, exam, media;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10;
    printf("Media: %.1f\n", media);

    if(media >= 7){
        printf("Aluno aprovado.\n");
    }
    if(media >= 5 && media < 7){
        printf("Aluno em exame.\n");
        scanf("%f", &exam);
        printf("Nota do exame: %.1f\n", exam);
        media = (exam + media)/2;
        if(media >= 5){
            printf("Aluno aprovado.\n");
        }
        if(media< 5){
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media);
    }
    if(media < 5){
        printf("Aluno reprovado.\n");
    }
    return 0;
}
