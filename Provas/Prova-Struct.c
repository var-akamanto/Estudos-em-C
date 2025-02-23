#include <stdio.h>
#include <string.h>

struct Tabela {
	char letras[26];
	int numero[26];
};


struct Nome {
	int somaTotal;
	int resultadoFinal;
	char letrasNome[30];
	int numeroCorrespondente[26];
};

void PreencherTabela(struct Tabela tabela) {
	int contador = 1;
	for(int i = 0; i < 26; i ++) {
		tabela.letras[i] = 'A' + i;
		tabela.numero[i] = contador;
		contador++;
		if(contador>9) {
			contador = 1;
		}
	}
}

void incluirNome(int tamanhoNome,char * nomeAnalise, struct Tabela tabela, struct Nome nome) {
    for(int i = 0; i < tamanhoNome; i ++){
        nome.letrasNome[i] = nomeAnalise[i];
    }
}

void incluirSobrenome(int tamanhoSobrenome,char * sobrenome, struct Tabela tabela, struct Nome nome) {
    for(int i = 0; i < tamanhoNome; i ++){
        nome.letrasNome[i] = sobrenome[i];
    }
}

void mostrarAnaliseNome(struct Nome nome, int tamanhoNomeCompleto){
    char letras[26];
    printf("A soma total das letras é : %d", nome.somaTotal);
    printf("As letras que estão no nome são :\n");
    for(int i = 0; i < tamanhoNomeCompleto; i++){
        
    }
}

int main() {
	struct Tabela tabela;
	struct Nome analiseNome;

	char nome[10];
	
	char sobrenome[20];
	

	printf("Digite o nome : \n");
	scanf("%s", nome);
    int tamanhoNome = strlen(nome);
	printf("Digite o sobrenome : \n");
	scanf("%s", sobrenome);
	int tamanhoSobrenome = strlen(sobrenome);

	PreencherTabela(tabela);
	incluirNome(tamanhoNome,nome,tabela,analiseNome);
	incluirSobrenome(tamanhoSobrenome,sobrenome,tabela,analiseNome);


	return 0;
}
