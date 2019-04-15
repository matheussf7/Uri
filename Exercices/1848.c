#include <stdio.h>
#include <string.h>


//1848
int main(){
    char input[10];
    int cont = 0, soma = 0;

    while(1){
        if(cont == 3) break;
        gets(input);

        if(input[0] == '*') soma += 4;
        if(input[1] == '*') soma += 2;
        if(input[2] == '*') soma += 1;
        if(strcmp(input, "caw caw") == 0){
            printf("%d\n", soma);
            soma = 0;
            cont++;
        }

    }
    return 0;
}
