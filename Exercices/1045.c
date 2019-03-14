#include <stdio.h>
#include <math.h>

//1045
int main(){
    double a, b, c, maior, medio, menor;
    scanf("%lf %lf %lf", &a, &b, &c);

    //First part: rearranging in decreasing order
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

    a = maior;
    b = medio;
    c = menor;
    //Finish of the first part


    //ERROR HERE NOT DONE YET
    //Second part: verifying all the conditions
    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(pow(a, 2) == (pow(b, 2) + pow(c, 2))){
        printf("TRIANGULO RETANGULO\n");
    }
    if(pow(a, 2) > (pow(b, 2) + pow(c, 2))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(pow(a, 2) < (pow(b, 2) + pow(c, 2))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && a == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    if(a == b && b != c){
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
