#include <stdio.h>

int main() {

    float valor, precoFinal;
    char estado[3];

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    printf("Digite o estado de destino do produto (sigla): ");
    scanf("%s", estado);

    if (estado[0] == 'S' && estado[1] == 'P') {
        precoFinal = valor * 1.30;
    } else if (estado[0] == 'R' && estado[1] == 'J') {
        precoFinal = valor * 1.20;
    } else if (estado[0] == 'M' && estado[1] == 'G') {
        precoFinal = valor * 1.40;
    } else if (estado[0] == 'R' && estado[1] == 'S') {
        precoFinal = valor * 1.50;
    } else {
        printf("Erro: estado digitado invalido.\n");
        return 0;
    }

    printf("Preco final do produto: R$ %.2f\n", precoFinal);

    return 0;
}
