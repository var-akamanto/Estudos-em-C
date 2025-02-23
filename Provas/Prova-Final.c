#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
        char nome[20];
        char email[30];
        int telefone;
        int diaAniversario;
        int mesAniversario;
        int anoAniversario;
        char observacao[100];
};


void solicitaDados(struct Pessoa * pessoa, int qtdPessoas){
    for(int i = 0; i < qtdPessoas; i++){
            printf("Digite o nome da pessoa %d \n", i+1);
            scanf("%s", pessoa[i].nome);
            printf("Digite o email da pessoa %d \n", i+1);
            scanf("%s", pessoa[i].email);
            printf("Digite o telefone da pessoa %d \n", i+1);
            scanf("%d", &pessoa[i].telefone);
            printf("Digite o mes de nascimento da pessoa %d \n", i+1);
            scanf("%d", &pessoa[i].mesAniversario);
            printf("Digite o dia de nascimento da pessoa %d \n", i+1);
            scanf("%d", &pessoa[i].diaAniversario);

        }
}

void Menu(struct Pessoa * pessoas, int qtdPessoas){
    int mes, dia;
    char nome[20];
    int resp = 0;
    do{
        printf("\n1 - Buscar por nome\n2 - Buscar por mes de aniversario\n3 - Buscar por mes e dia de aniversario\n4 - Remover Pessoa \n5 - Imprimir Dados\n6 - Parar \n");
        scanf("%d", &resp);

        switch(resp){
        case 1:
            printf("Qual nome deseja buscar?\n");
            scanf("%s", nome);
            BuscaNome(nome, pessoas, qtdPessoas);
            break;
        case 2:
            printf("Qual mes deseja buscar?\n");
            scanf("%d", &mes);
            buscaPorMes(mes,pessoas,qtdPessoas);
            break;
        case 4:
            printf("Digite o nome da pessoa que deseja remover:\n");
            scanf("%s", nome);
            removerPessoa(pessoas, &qtdPessoas, nome);
    break;
        case 3:
            printf("Dia :\n");
            scanf("%d", &dia);
            printf("Mes :\n");
            scanf("%d", &mes);
            buscarPorDiaEMes(dia,mes, pessoas,qtdPessoas);
            break;
        case 5:
            printf("\n1 - Imprimir Agenda\n2 - Imprimir todos os dados");
            scanf("%d", &resp);
            if(resp==1){
               ImprimirAgendaTodos(pessoas,qtdPessoas);
            }else if(resp == 2){
                imprimeTudo(pessoas, qtdPessoas);
            }
            break;
        }


    }while(resp != 6);
}



void imprimePessoa(struct Pessoa *pessoa) {
    printf("Nome : %s\n", pessoa->nome);
    printf("E-mail : %s\n", pessoa->email);
    printf("Telefone : %d\n", pessoa->telefone);
    printf("\n");
}


void imprimeTudo(struct Pessoa *pessoas,int qtdPessoas){
    for(int i = 0;i<qtdPessoas;i++){
    printf("\n-=-=-=-=-=-=-=-=-=-=-=--=-=-==-=\n");
    printf("Nome : %s\n", pessoas[i].nome);
    printf("E-mail : %s\n", pessoas[i].email);
    printf("Telefone : %d\n", pessoas[i].telefone);
    printf("Dia de Nascimento : %d\n", pessoas[i].diaAniversario);
    printf("Mes de nascimento : %d\n", pessoas[i].mesAniversario);
    printf("Ano de Nascimento : %d\n", pessoas[i].anoAniversario);
    }
    printf("\n-=-=-=-=-=-=-=-=-=-=-=--=-=-==-=\n");
}


void ImprimirAgendaTodos(struct Pessoa *pessoas,int qtdPessoas){
    for(int i = 0;i<qtdPessoas;i++){
    printf("-=-=-=-=-=-=-=-=-=-=-=--=-=-==-=");
    printf("Nome : %s\n", pessoas[i].nome);
    printf("E-mail : %s\n", pessoas[i].email);
    printf("Telefone : %d\n", pessoas[i].telefone);
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=--=-=-==-=");
}


void BuscaNome(char nome[20], struct Pessoa * pessoas, int qtdPessoas){
    for(int i = 0;i < qtdPessoas; i++){
        if(strcmp(nome,pessoas[i].nome) == 0){
            imprimePessoa(&pessoas[i]);
            break;
        }
    }
}

void buscaPorMes(int mesNascimento, struct Pessoa * pessoas, int qtdPessoas){
        for(int i = 0;i < qtdPessoas; i++){
        if(mesNascimento == pessoas[i].mesAniversario){
            imprimePessoa(&pessoas[i]);
            break;
        }else{
            printf("Nenhuma informacao encontrada.\n");
            break;
        }
    }

}

void removerPessoa(struct Pessoa *pessoas, int *qtdPessoas, char nome[20]) {
    int index = -1;
    for (int i = 0; i < *qtdPessoas; i++) {
        if (strcmp(nome, pessoas[i].nome) == 0) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Pessoa com o nome '%s' nao encontrada.\n", nome);
        return;
    }
    for (int i = index; i < *qtdPessoas - 1; i++) {
        pessoas[i] = pessoas[i + 1];
    }
    (*qtdPessoas)--;
    printf("Pessoa com o nome '%s' foi removida com sucesso.\n", nome);
}


void buscarPorDiaEMes(int dia,int mes, struct Pessoa * pessoas,int qtdPessoas){
        for(int i = 0;i < qtdPessoas; i++){
        if((mes == pessoas[i].mesAniversario) && (dia == pessoas[i].diaAniversario)){
            imprimePessoa(&pessoas[i]);
            break;
        }else{
            printf("Nenhuma informacao encontrada.\n");
            break;
        }
    }

}




int main()
{
    int tamanho = 2;
    struct Pessoa pessoas[tamanho];
    solicitaDados(pessoas,tamanho);
    Menu(pessoas, tamanho);
    return 0;
}
