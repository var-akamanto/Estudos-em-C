/*Escreva um algoritmo para simular uma calculadora simples com as seguintes operações: +,
-, *, /, %, usando os comandos switch case e do while. O algoritmo deve ler os dados na seguinte ordem:
valor 1, operação, valor 2 e = (Para as operações +, -, * e /); ou
valor 1, operação, valor 2 e % (Para operações com %).
Após o resultado, o usuário deve digitar “Y” para continuar e realizar outro cálculo ou “N” para sair da
calculadora.*/

#include <stdio.h>
#include <math.h>
#include <stdio.h>

int main() {
 float n1, n2;
 char op, op2, resp;
 float resultado;

 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
 printf("CALCULADORA\n");
 printf("digite sua operacao [+], [-], [*], [/], [%%}\n");
 printf("Exemplo : 2+2= ; 10+5%%\n");
 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

 do {
 printf("Digite aqui : ");
 scanf("%f %c %f %c", &n1, &op, &n2, &op2);

 if (op2 == '=') {
 switch (op) {
 case '+':
 resultado = n1 + n2;
 printf("%f\n", resultado);
 break;
 case '-':
 resultado = n1 - n2;
 printf("%f\n", resultado);
 break;
 case '*':
 resultado = n1 * n2;
 printf("%f\n", resultado);
 break;
 case '/':
 if (n2 == 0) {
 printf("Erro! Divisao por zero.\n");
 } else {
 resultado = n1 / n2;
 printf("%f\n", resultado);
 }
 break;
 default:
 printf("Operacao invalida.\n");
 break;
 }
 } else if (op2 == '%') {
 switch (op) {
 case '+':
 resultado = n1 + (n1 * n2 / 100);
 printf("%f\n", resultado);
 break;
 case '-':
 resultado = n1 - (n1 * n2 / 100);
 printf("%f\n", resultado);
 break;
 case '*':
 resultado = n1 * (n2 / 100);
 printf("%f\n", resultado);
 break;
 case '/':
 if (n2 == 0) {
 printf("Erro! Divisao por zero.\n");
 } else {
 resultado = n1 / (n2 / 100);
 printf("%f\n", resultado);
 }
 break;
 default:
 printf("Operacao invalida.\n");
 break;
 }
 } else {
 printf("Operacao invalida.\n");
 }

 printf("Y para continuar e N para parar\n");
 scanf(" %c", &resp);
 } while (resp != 'N');

 return 0;
}
