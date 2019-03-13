#include <stdio.h>

//1021
int main(){

    double quant;
    int quant2, quant3;
	scanf("%lf", &quant);
    quant2 = (int) quant;
    quant3 = (quant*100)-(quant2*100);

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", quant2/100);
	printf("%d nota(s) de R$ 50.00\n", ((quant2 % 100)/50));
	printf("%d nota(s) de R$ 20.00\n", (((quant2 % 100)%50)/20));
	printf("%d nota(s) de R$ 10.00\n", (((quant2 % 100)%50)%20)/10);
	printf("%d nota(s) de R$ 5.00\n", (((((quant2 % 100)%50)%20)%10)/5));
    printf("%d nota(s) de R$ 2.00\n", ((((((quant2 % 100)%50)%20)%10)%5)/2));
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", (((((((quant2 % 100)%50)%20)%10)%5)%2)/1));
    printf("%d moeda(s) de R$ 0.50\n", quant3/50);
    printf("%d moeda(s) de R$ 0.25\n", (quant3%50)/25);
    printf("%d moeda(s) de R$ 0.10\n", (quant3%50)%25/10);
    printf("%d moeda(s) de R$ 0.05\n", ((quant3%50)%25)%10/5);
    printf("%d moeda(s) de R$ 0.01\n", ((((quant3%50)%25)%10)%5)/1);



    return 0;
}
