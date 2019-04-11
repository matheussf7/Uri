#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define T "tesoura"
#define PE "pedra"
#define PA "papel"
#define S "Spock"
#define L "lagarto"
#define CASO1 100 // Bazinga!
#define CASO2 200 // Raj trapaceou
#define CASO3 300 // De novo

//1828
int main(){
    int n, i, caso;
    char sheldon[10], raj[10];

    scanf("%d", &n);
    getchar();
    for(i=1;i<=n;i++){
        scanf("%s %s", sheldon, raj);

        if(strcmp(sheldon, T)==0){
            if(strcmp(raj, T)==0) caso = CASO3;
            else if(strcmp(raj, PE)==0) caso = CASO2;
            else if(strcmp(raj, PA)==0) caso = CASO1;
            else if(strcmp(raj, S)==0) caso = CASO2;
            else if(strcmp(raj, L)==0) caso = CASO1;
        }
        else if(strcmp(sheldon, PE)==0){
            if(strcmp(raj, T)==0) caso = CASO1;
            else if(strcmp(raj, PE)==0) caso = CASO3;
            else if(strcmp(raj, PA)==0) caso = CASO2;
            else if(strcmp(raj, S)==0) caso = CASO2;
            else if(strcmp(raj, L)==0) caso = CASO1;
        }
        else if(strcmp(sheldon, PA)==0){
            if(strcmp(raj, T)==0) caso = CASO2;
            else if(strcmp(raj, PE)==0) caso = CASO1;
            else if(strcmp(raj, PA)==0) caso = CASO3;
            else if(strcmp(raj, S)==0) caso = CASO1;
            else if(strcmp(raj, L)==0) caso = CASO2;
        }
        else if(strcmp(sheldon, L)==0){
            if(strcmp(raj, T)==0) caso = CASO2;
            else if(strcmp(raj, PE)==0) caso = CASO2;
            else if(strcmp(raj, PA)==0) caso = CASO1;
            else if(strcmp(raj, S)==0) caso = CASO1;
            else if(strcmp(raj, L)==0) caso = CASO3;
        }
        else if(strcmp(sheldon, S)==0){
            if(strcmp(raj, T)==0) caso = CASO1;
            else if(strcmp(raj, PE)==0) caso = CASO1;
            else if(strcmp(raj, PA)==0) caso = CASO2;
            else if(strcmp(raj, S)==0) caso = CASO3;
            else if(strcmp(raj, L)==0) caso = CASO2;
        }

        if(caso == CASO1){
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if(caso == CASO2){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if(caso == CASO3){
            printf("Caso #%d: De novo!\n", i);
        }

    }

    return 0;
}
