#include <stdio.h>

int main(){

    int i = 13, soma = 0, k = 0;

    // Condição enquanto 'k' for menor que 'i'
    while (k < i){

        // Iniciando em 0, a cada loop, 'k' irá receber o valor do loop anterior e adicionar + 1
        k = k + 1;
        // Após isso, 'soma' irá receber o valor de 'soma' e adicionar o valor de 'k'
        soma = soma + k;
    }

    // Aqui o programa irá imprimir a saída do código
    printf ("%d", soma);

    return 0;
}