#include <stdio.h>

//1038
int main(){
    int code, quant;
    float total;
    scanf("%d %d", &code, &quant);

    switch(code){
    case 1:
        total = 4 * quant;
        printf("Total: R$ %.2f\n", total);
        break;
    case 2:
        total = 4.5 * quant;
        printf("Total: R$ %.2f\n", total);
        break;
    case 3:
        total = 5 * quant;
        printf("Total: R$ %.2f\n", total);
        break;
    case 4:
        total = 2 * quant;
        printf("Total: R$ %.2f\n", total);
        break;
    case 5:
        total = 1.5 * quant;
        printf("Total: R$ %.2f\n", total);
        break;
    }
    return 0;
}
