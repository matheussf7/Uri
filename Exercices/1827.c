#include <stdio.h>

//1827
//Observação: Essa questão me levou um bom tempo para fazer... por isso, para melhor entendimento vou explicar tópico por tópico como realizá-la.
int main(){
    int var;
    int i, j, aux1; //Contadores e auxiliar.

    while(scanf("%d", &var) != EOF){
        int matriz[var][var]; // Criação da matriz n por n. (var x var)

        /*
        Verificação de diagonais:
        Se a parte for diagonal principal, ela será preenchida de 2. Algoritmo-> Na diagonal principal, i sempre será igual a j.
        Se a parte for diagonal secundária, será preenchida de 3. Algoritmo-> Na diagonal secundária, i + j sempre será igual o tamanho da matriz menos 1.
        Se nenhuma das duas verificações anteriores for satisfeita, a posição será preenchida com 0 - parte interna.
        */
        for(i=0;i<var;i++){
            for(j=0;j<var;j++){
                if(i==j) matriz[i][j] = 2;
                else if(i+j == var-1) matriz[i][j] = 3;
                else matriz[i][j] = 0;
            }
        }

        aux1 = var/3; //Auxiliar da verificação da parte interna.
        //Algoritmo-> Com a divisão inteira, temos o valor exato de quantas vezes o número da diagonal primária e secundária se repetirão(simetricamente).
        //Além disso, também temos o número de em qual casa a matriz interna começará.
        /*
        Ex.:
        matriz[5][5]
        aux1 = 5/3 .: aux1 = 1, então temos que as diagonais se repetirão uma vez(em cima, depois em baixo) e que a matriz interna começará na posição
        matriz[1][1].

        Matriz final:
        2 0 0 0 3
        0 1 1 1 0
        0 1 4 1 0
        0 1 1 1 0
        3 0 0 0 2

        */

        /*
        Verificação de parte interna
        Essa função vai realizar o seguinte algoritmo:
        Temos dois laços de repetição for para representar a matriz interna composta por 1, o tamanho da matriz interna sempre será igual ao tamanho inicial
        menos a quantidade de vezes que a diagonal primária e secundária se repetirão.
        Os dois contadores começarão com a posição inicial da matriz interna, como explicado acima, é igual ao aux1.

        */
        for(i=aux1;i<(var-aux1);i++){
            for(j=aux1;j<(var-aux1);j++){
                matriz[i][j] = 1;
            }
        }

        /*
        Verificação de meio:
        Explicação: O meio sempre é a divisão inteira da matriz ímpar, ex.: matriz[7][7], meio = 7/2 .: meio = 3; na posição
        matriz[3][3] o valor para ser assumido é 4.
        */

        matriz[var/2][var/2] = 4;

        /* O algoritmo precisa ser montado nessa ordem para satisfazer a ordem de alocação da matriz: Parte externa -> Parte interna -> Meio*/

        //Função print.
        for(i = 0; i < var; i++){
			 for(j = 0; j < var; j++){
				 printf("%d", matriz[i][j]);
			 }
			 printf("\n");
        }

        printf("\n");
    }
    return 0;
}
