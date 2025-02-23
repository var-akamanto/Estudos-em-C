#include <stdio.h>
#include <stdlib.h>

int main() {

	float valorInicial;
	int nMeses;
	float jurosMensais;
	float* meses;


	printf("Qual o valor inicial a ser aplicado?\n");
	scanf("%f", &valorInicial);
	printf("Qual sera o total de meses?\n");
	scanf("%d", &nMeses);
	printf("Qual a porcentagem de juros mensais?\n");
	scanf("%f", &jurosMensais);

	meses = (float*) malloc(sizeof(float) * nMeses);

	meses[0] = valorInicial;
	float multiplicador = (jurosMensais/100.0) + 1;

	for(int i = 1; i < nMeses; i++) {
		meses[i] = meses[i-1] * multiplicador;
	}


	for(int i = 0; i < nMeses; i++) {
		printf("\n Mes %d = %f", i, meses[i]);
	}

	free(meses);
	return 0;
}