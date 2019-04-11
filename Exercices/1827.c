#include <stdio.h>

//1827
//Observa��o: Essa quest�o me levou um bom tempo para fazer... por isso, para melhor entendimento vou explicar t�pico por t�pico como realiz�-la.
int main(){
    int var;
    int i, j, aux1; //Contadores e auxiliar.

    while(scanf("%d", &var) != EOF){
        int matriz[var][var]; // Cria��o da matriz n por n. (var x var)

        /*
        Verifica��o de diagonais:
        Se a parte for diagonal principal, ela ser� preenchida de 2. Algoritmo-> Na diagonal principal, i sempre ser� igual a j.
        Se a parte for diagonal secund�ria, ser� preenchida de 3. Algoritmo-> Na diagonal secund�ria, i + j sempre ser� igual o tamanho da matriz menos 1.
        Se nenhuma das duas verifica��es anteriores for satisfeita, a posi��o ser� preenchida com 0 - parte interna.
        */
        for(i=0;i<var;i++){
            for(j=0;j<var;j++){
                if(i==j) matriz[i][j] = 2;
                else if(i+j == var-1) matriz[i][j] = 3;
                else matriz[i][j] = 0;
            }
        }

        aux1 = var/3; //Auxiliar da verifica��o da parte interna.
        //Algoritmo-> Com a divis�o inteira, temos o valor exato de quantas vezes o n�mero da diagonal prim�ria e secund�ria se repetir�o(simetricamente).
        //Al�m disso, tamb�m temos o n�mero de em qual casa a matriz interna come�ar�.
        /*
        Ex.:
        matriz[5][5]
        aux1 = 5/3 .: aux1 = 1, ent�o temos que as diagonais se repetir�o uma vez(em cima, depois em baixo) e que a matriz interna come�ar� na posi��o
        matriz[1][1].

        Matriz final:
        2 0 0 0 3
        0 1 1 1 0
        0 1 4 1 0
        0 1 1 1 0
        3 0 0 0 2

        */

        /*
        Verifica��o de parte interna
        Essa fun��o vai realizar o seguinte algoritmo:
        Temos dois la�os de repeti��o for para representar a matriz interna composta por 1, o tamanho da matriz interna sempre ser� igual ao tamanho inicial
        menos a quantidade de vezes que a diagonal prim�ria e secund�ria se repetir�o.
        Os dois contadores come�ar�o com a posi��o inicial da matriz interna, como explicado acima, � igual ao aux1.

        */
        for(i=aux1;i<(var-aux1);i++){
            for(j=aux1;j<(var-aux1);j++){
                matriz[i][j] = 1;
            }
        }

        /*
        Verifica��o de meio:
        Explica��o: O meio sempre � a divis�o inteira da matriz �mpar, ex.: matriz[7][7], meio = 7/2 .: meio = 3; na posi��o
        matriz[3][3] o valor para ser assumido � 4.
        */

        matriz[var/2][var/2] = 4;

        /* O algoritmo precisa ser montado nessa ordem para satisfazer a ordem de aloca��o da matriz: Parte externa -> Parte interna -> Meio*/

        //Fun��o print.
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
