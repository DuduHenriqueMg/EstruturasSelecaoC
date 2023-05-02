#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 5 == 0) {
        printf("%d é divisivel por 5.\n", num);
    }else if(num % 3 == 0) {
        printf("%d é divisivel por 3.\n", num);
    }else if(num % 2 == 0) {
        printf("%d é divisivel por 2.\n", num);
    }else{
        printf("%d nao e divisivel por 5, 3 ou 2.\n", num);
    }

    return 0;
}
