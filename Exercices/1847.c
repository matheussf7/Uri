#include <stdio.h>

//1847
int main(){
    int pdia, sdia, tdia, happy;
    scanf("%d %d %d", &pdia, &sdia, &tdia)

    if(pdia > sdia){
        if(sdia <= tdia) happy = 1;
        else happy = 0;
    }
    else if(pdia > sdia && sdia < tdia){
        if(tdia-sdia < sdia-pdia) happy = 0;
        else happy = 1;
    }
    else if(pdia > sdia)


    return 0;
}
