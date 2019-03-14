#include <stdio.h>
#include <math.h>

//1045
int main(){
    double a, b, c, maior, menor, medio;
    scanf("%lf %lf %lf", &a, &b, &c);

    //First part: rearranging in decreasing order
    if(a>=b && a>=c){
        maior = a;
        if(b>c){
            menor = c;
            medio = b;
        }
        else{
            menor = b;
            medio = c;
        }
    }
    if(b>=a && b>=c){
        maior = b;
        if(a>c){
            menor = c;
            medio = a;
        }
        else{
            menor = a;
            medio = c;
        }
    }
    if(c>=b && c>=a){
        maior = c;
        if(b>a){
            menor = a;
            medio = b;
        }
        else{
            menor = b;
            medio = a;
        }
    }


    a = maior;
    b = medio;
    c = menor;
    //Finish of the first part

    //Second part: verifying all the conditions
    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(pow(a, 2) == (pow(b, 2) + pow(c, 2))){
        printf("TRIANGULO RETANGULO\n");
    }
    if(pow(a, 2) < (pow(b, 2) + pow(c, 2))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(pow(a,2) > (pow(b, 2) + pow(c, 2))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a == b && b != c) || (b == c && c != a)){
        printf("TRIANGULO ISOSCELES\n");
    }
    //Finish of the second part


    return 0;
}
