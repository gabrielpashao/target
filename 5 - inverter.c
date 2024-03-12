#include <stdio.h>

// Para essa situação, precisaremos primeiramente criar duas funções
// Uma calcula o tamanho da string e outra inverte os caracteres

// Aqui, vamos calcular o tamanho da string
int calcularTamanho(char *str) {

    int tamanho = 0;

    // Condição onde irá contar os caractéres quando for diferente de nulo (\0)
    while (str[tamanho] != '\0') {

        // Incrementa o 'tamanho' a cada loop
        tamanho++;
    }

    // Retorna o tamanho da string em inteiros
    return tamanho;
}

// E agora inverter os caracteres da string
void inverterString(char *str) {

    // Nesse momento ela irá chamar a primeira função para retornar o valor de 'tamanho'
    int tamanho = calcularTamanho(str);
    int i, j;
    char temp;

    // Laço de repetição onde inverteremos os caracteres da matriz
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {

        // Troca os caracteres na posição 'i' e 'j'
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Função principal
int main() {

    // Defini um valor de 100 caracteres para a string
    char string[100];

    printf("Digite uma string: "); // Solicita a entrada de uma string
    gets(string); // Captura a string inserida

    // Chama a função de inverter a string, que por sua vez chama a função de calcular o tamanho da string
    inverterString(string);

    // Retorna a string invertida
    printf("String invertida: %s\n", string);

    return 0;
}
