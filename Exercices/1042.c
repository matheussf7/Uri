#include <stdio.h>

//1042
int main(){
    int a, b, c, menor, medio, maior;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        maior = a;
        if(c>b){
            medio = c;
            menor = b;
        }
        else{
            medio = b;
            menor = c;
        }
    }
    if(b>a && b>c){
        maior = b;
        if(a>c){
            medio = a;
            menor = c;
        }
        else{
            medio = c;
            menor = a;
        }
    }
    if(c>a && c>b){
        maior = c;
        if(a>b){
            medio = a;
            menor = b;
        }
        else{
            medio = b;
            menor = a;
        }
    }

    printf("%d\n%d\n%d\n", menor, medio, maior);
    putchar('\n');
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
