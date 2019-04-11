#include <stdio.h>

int main(){
    int var;

    while(scanf("%d", &var) != EOF){
        if(var > 0){
            printf("vai ter duas!\n");
        }
        else{
            printf("vai ter copa!\n");
        }
    }

    return 0;
}
