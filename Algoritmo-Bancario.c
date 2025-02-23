/*
1) (4 pontos) Faça um algoritmo bancário que apresente um menu com 4 opções: (1) consulta saldo, (2)
saque, (3) depósito e (4) sair. A opção 1 apenas exibe o saldo da conta. A opção 2 solicita o valor do saque e
atualiza o saldo da conta. A opção 3 solicita o valor do depósito e atualiza o saldo da conta. A opção 4
encerra o algoritmo.
*/
#include <stdio.h>
int main()
{
    float dep_inicial, saldo, saque, deposito;
    int op;
    printf("------------Bem vindo ao IFSC Bank------------\n");
    printf("Para iniciar as operacoes, faca seu primeiro deposito\n");
    printf("Quanto voce deseja depositar?\n");
    scanf("%f", &dep_inicial);
    saldo = dep_inicial;
    printf("Seja bem-vindo!\n");
    do
    {
        printf("Qual operacao voce deseja fazer?\n");
        printf("[1] Consultar saldo\n");
        printf("[2] Saque\n");
        printf("[3] Deposito\n");
        printf("[4] Finalizar e sair\n");
        scanf("%d", &op);
        switch (op)
        {
            case 1 :
            printf("Seu saldo atual e : %f\n", saldo );
            break;
            case 2 :
            printf("Qual sera o valor do saque?\n");
            scanf("%f", &saque);
            if (saque > saldo)
            {
               printf("Erro! Saldo insuficiente.\n");
               break;
            }
            else{
               saldo = saldo - saque;
               printf("Saque de %f feito com sucesso!\n", saque);
               printf("Seu saldo atual e %f\n", saldo); 
               break;
            }
            case 3 :
               printf("Qual sera o valor do deposito?\n");
               scanf("%f", &deposito);
               saldo = saldo + deposito;
               printf("Deposito de %f feito com sucesso!\n", deposito);
               printf("Seu saldo atual e %f\n", saldo);
               break;
            case 4 :
            break;
            default :
            printf("Digite uma operacao valida.\n");
            break;
        }
    } while (op != 4);
    printf("Volte sempre!");
    return 0;
}