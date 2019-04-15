#include <stdio.h>

//1847
int main(){
    int pdia, sdia, tdia, happy;
    scanf("%d %d %d", &pdia, &sdia, &tdia);

    if(pdia > sdia && sdia <= tdia) happy = 1; // 1
    else if((pdia < sdia) && (sdia >= tdia)) happy = 0; // 2
    else if((pdia < sdia) && (pdia < tdia)){
        if((tdia - sdia) < (sdia - pdia)) happy = 0; // 3
        else happy = 1; // 4
    }
    else if((pdia > sdia) && (sdia > tdia)){
        if((sdia-tdia) < (pdia-sdia)) happy = 1; // 5
        else happy = 0; // 6
    }
    else if(pdia == sdia){
        if(sdia < tdia) happy = 1;
        else happy = 0;
    }

    if(happy == 1) printf(":)\n");
    else printf(":(\n");
    return 0;
}
