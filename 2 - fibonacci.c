#include <stdio.h>

// Função para verificação da sequência de Fibonacci
int fibonacci(int n){

    int a = 0, b = 1, temp;

    // Recebe o valor 'n' da função principal e inicia a verificação
    // Condição enquanto 'b' for menor que 'n', onde 'n' é o número digitado na função principal
    // Aqui é onde a sequência de Fibonacci está
    while (b < n){

        //Essa condição irá percorrer a sequência de Fibonacci até o número escolhido

        // A cada loop, 'temp' irá receber o valor de 'b'
        temp = b;

        // Aqui, a soma dos 2 valores anteriores será feita
        b = a + b;

        // 'a' receberá o valor de 'temp', avançando uma casa decimal e reiniciando o loop até o 'n'
        a = temp;
    }

    // Verifica se 'b' é igual o número digitado
    if (b == n){
        return 1; // Retorna para função principal que o número ESTÁ na sequência de Fibonacci
    }else{
        return 0; // Restorna para função principal que o número NÃO ESTÁ na sequência de Fibonacci
    }
}


int main(){

    int numero;

    // Solicita a entrada do número a ser calculado
    printf("Digite um número: ");
    // Lê e armazena o número digitado na variável 'numero'
    scanf("%d", &numero);

    // Chama a função de fibonacci e verifica suas saídas
    if (fibonacci(numero)){

        printf("%d está na sequência de Fibonacci.\n", numero); // Retornou 1 (TRUE) na função de Fibonacci
    }else{
        printf("%d não está na sequência de Fibonacci.\n", numero); // Retornou 0 (FALSE) na função de Fibonacci
    }
    
    return 0;
}