#include <stdio.h>

int main () {

	int codigo, quantidade;
    float valorTotal;
	
    printf("CARDAPIO\n\n");

	printf("100 - Cachorro quente - R$ 10,10\n");
	printf("101 - Bauru simples - R$8,30\n");
    printf("102 - Bauru c/ovo - R$ 8,50\n");
    printf("103 - Hamburger - R$12,50\n");
    printf("104 - Cheeseburger - 13,25\n\n");
    
	printf("Insira o codigo da refeicao: ");
    scanf("%d", &codigo);

    printf("Insira a quantidade: ");
    scanf("%d", &quantidade);

		switch (codigo) {

		case 100:
			printf("\nVoce escolheu Cachorro quente.\n");
			valorTotal = quantidade * 10.10;
            printf("O valor total da refeicao deu R$%.2f", valorTotal);
			break;
		case 101:
			printf("\nVoce escolheu Bauru simples.\n");
			valorTotal = quantidade * 8.30;
            printf("O valor total da refeicao deu R$%.2f", valorTotal);
			break;
		case 102:
			printf("\nVoce escolheu Bauru c/ovo.\n");
			valorTotal = quantidade * 8.50;
            printf("O valor total da refeicao deu R$%.2f", valorTotal);
			break;
		case 103:
			printf("\nVoce escolheu Hamburger.\n");
			valorTotal = quantidade * 12.50;
            printf("O valor total da refeicao deu R$%.2f", valorTotal);
			break;
        case 104:
			printf("\nVoce escolheu Cheeseburger.\n");
			valorTotal = quantidade * 13.25;
            printf("O valor total da refeicao deu R$%.2f", valorTotal);
			break;
        default:
            printf("Codigo nao reconhecido");
            break;
	}
}