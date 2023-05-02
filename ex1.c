#include <stdio.h>
#include <math.h>

int main() {
    
    float numero;
    printf("Digite um numero : ");
    scanf("%f", &numero);

    if(numero > 0) {
        printf("O numero digitado ao quadrado e %.2f\n", pow(numero, 2));
        printf("A raiz quadrada do numero digitado e %.2f\n", sqrt(numero));
    } else {
        printf("O numero digitado nao e positivo.");
    }

    return 0;
}
