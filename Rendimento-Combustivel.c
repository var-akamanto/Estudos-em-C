#include <stdio.h>

int main ()
{
    float km_inicial, km_final, dif_km, litros_gastos, capac_tanque, km_tanque_cheio;
    printf("Quilometragem do veiculo antes da viagem:");
    scanf("%f", &km_inicial);
    printf("Quilometragem do veiculo ao final da viagem:");
    scanf("%f", &km_final);
    printf("Litros Gastos:");
    scanf("%f", &litros_gastos);
    printf("Capacidade do combustivel (em litros) :");
    scanf("%f", &capac_tanque);
    
    dif_km = km_final - km_inicial;    
    km_tanque_cheio = capac_tanque * dif_km / litros_gastos;
    
    printf("Com o tanque cheio, o carro consegue rodar %.2f quilometros",km_tanque_cheio);
    return 0;
}
