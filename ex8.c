#include <stdio.h>

int main () {

	int prato, sobremesa, bebida, caloria;
	
    printf("PRATOS\n\n");
	printf("1-Vegetariano ----------- 180 cal\n");
	printf("2-Peixe ----------------- 230 cal\n");
	printf("3-Frango ---------------- 250 cal\n");
	printf("4-Carne ----------------- 350 cal\n");
	printf("\nInsira o numero do prato: ");
	scanf("%d", &prato);
	
    printf("\nSOBREMESAS\n\n");
	printf("1-Abacaxi ---------------------- 75 cal\n");
	printf("2-Sorvete Diet ---------------- 110 cal\n");
	printf("3-Mouse Diet ------------------ 170 cal\n");
	printf("4-Mouse Chocolate ------------- 200 cal\n");
	printf("\nInsira o numero da sobremesa: ");
	scanf("%d", &sobremesa);
	
    printf("\nBEBIDAS\n\n");
	printf("1-Chá -------------------------- 20 cal\n");
	printf("2-Suco Laranja ----------------- 70 cal\n");
	printf("3-Suco Melão ------------------ 100 cal\n");
	printf("4-Refrigerante Diet ----------- 65 cal\n");
	printf("\nInsira o numero da bebida: ");
	scanf("%d", &bebida);
	
	switch (prato) {

		case 1:
			printf("Voce escolheu o prato Vegetariano.\n");
			caloria = 180;
			break;
		case 2:
			printf("Voce escolheu o prato Peixe.\n");
			caloria = 230;
			break;
		case 3:
			printf("Voce escolheu o prato Frango.\n");
			caloria = 250;
			break;
		case 4:
			printf("Voce escolheu o prato Carne.\n");
			caloria = 350;
			break;
	}

    switch (sobremesa) {

		case 1:
			printf("Voce escolheu a sobremesa Abacaxi.\n");
			caloria = caloria + 75;
			break;
		case 2:
			printf("Voce escolheu a sobremesa Sorvete Diet.\n");
			caloria = caloria + 110;
			break;
		case 3:
			printf("Voce escolheu a sobremesa Mouse Diet.\n");
			caloria = caloria + 170;
			break;
		case 4:
			printf("Voce escolheu a sobremesa Mouse Chocolate.\n");
			caloria = caloria + 200;
			break;
	}

	switch (bebida) {

		case 1:
			printf("Voce escolheu a bebida Chá.\n");
			caloria = caloria + 20;
			break;
		case 2:
			printf("Voce escolheu a bebida Suco Laranja.\n");
			caloria = caloria + 70;
			break;
		case 3:
			printf("Voce escolheu a bebida Suco Melão.\n");
			caloria = caloria + 100;
			break;
		case 4:
			printf("Voce escolheu a bebida Refrigerante Diet.\n");
			caloria = caloria + 65;
			break;
	}
	
	printf("\nA quantidade total de calorias da sua refeição foi: %d ", caloria);

}