#include <stdio.h>
#include <stdlib.h>


void PreencheVetor(int* vetor, int total) {
	int numeroInicial;

	printf("Informe o numero inicial do vetor:\n");
	scanf("%d",&numeroInicial);

	vetor[0] = numeroInicial;

	for(int x = 0; x<total; x++) {
		numeroInicial = (numeroInicial + 2);
		vetor[x] = numeroInicial;
	}
}

void Imprime(int* vetor, int tamanho) {
	for(int x = 0; x < tamanho; x++) {
		printf("\n posicao %d = %d ", (x+1), vetor[x]);
	}
}


int main()
{
	int* vetor;
	int total;

	printf("Quantas posiC'C5es o vetor vai ter?\n");
	scanf("%d", &total);

	vetor = (int*) malloc(sizeof(int) * total);
	PreencheVetor(vetor,total);
	Imprime(vetor,total);
	free(vetor);


	return 0;
}