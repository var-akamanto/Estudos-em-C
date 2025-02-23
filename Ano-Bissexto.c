#include <stdio.h>
int anos(int AnoAtual, int anoNascimento)
{
    int idade = 0;
    idade = anoAtual - anoNascimento;
    return idade;
}

int bissexto(int ano){
	int resp = 0;
	if(ano % 4 == 0 && ano%100!=0){
		resp = 1;
	} else if (ano %4 == 0 && ano % 100 == 0 && ano % 400 == 0){
		resp = 1;
	}
	return resp;
}

int main(){
    char nome[20];
    int anoNasc = 0;
    int anoAtual = 0;
    printf("Digite seu nome : ");
    scanf("%s", nome);
    printf("Digite sua data de nascimento : ");
    scanf("%d", &anoNasc);
    printf("Digite o ano atual : ");
    scanf("%d", &anoAtual);
    int idade = 0;
    int diasVividos = 0
    idade = anos(anoAtual,anoNasc);
    for(int x = 0; x <=idade; x++){
    	if(bissexto(
	}
    
    printf("%s tem %d anos de idade. Viveu %d dias.", nome, idade, diasVividos);
    
    return 0;
}