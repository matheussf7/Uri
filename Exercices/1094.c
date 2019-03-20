#include <stdio.h>

//1094
int main(){
    int totalc=0, totalr=0, totals=0, n, quant, i, total=0;
    float porcc, porcs, porcr;
    char animal;
    scanf("%d", &quant);
    for(i=0;i<quant;i++){
        scanf("%d %c", &n, &animal);
        if(animal == 'C'){
            totalc = totalc + n;
        }
        if(animal == 'R'){
            totalr = totalr + n;
        }
        if(animal == 'S'){
            totals = totals + n;
        }

        total = total + n;
    }
    porcc = (float) (totalc*100)/total;
    porcr = (float) (totalr*100)/total;
    porcs = (float) (totals*100)/total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalc);
    printf("Total de ratos: %d\n", totalr);
    printf("Total de sapos: %d\n", totals);
    printf("Percentual de coelhos: %.2f %%\n", porcc);
    printf("Percentual de ratos: %.2f %%\n", porcr);
    printf("Percentual de sapos: %.2f %%\n", porcs);

    return 0;
}
