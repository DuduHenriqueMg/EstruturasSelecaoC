#include <stdio.h>

int main() {

    int operacao;
    float num1, num2, resultado;

    printf("Escolha uma operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Operacao: ");
    scanf("%d", &operacao);

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    switch(operacao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            if(num2 == 0) {
                printf("Não é possível dividir por zero.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado da divisao: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}
