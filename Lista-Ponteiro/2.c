#include <stdio.h>

void preencheTerceiroVetor(int * vetor1, int * vetor2, int * vetor3, int tamanho){
    int pos = 0;
    for(int vetor = 0; vetor < tamanho; vetor ++){
        for(int elemento = 0; elemento<tamanho;elemento++){
            if(vetor1[vetor] == vetor2[elemento]){
                int existe = 0;
                for(int i = 0; i < pos ;i++){
                    if(vetor3[i] == vetor1[vetor]){
                        existe = 1;
                        break;
                    }
                }
                if(existe == 0){
                 vetor3[pos] = vetor1[vetor];
                pos++;   
                }
            }
        }
    }
    
}

void imprimeVetor(int * vetor, int tamanho){
    printf("Vetor :\n");
    for(int i = 0; i < tamanho;i++){
        printf(" [%d] ", vetor[i]);
    }
}

void solicitarValores(int * vetor1, int * vetor2, int tamanho){
    printf("Preenchendo o vetor 1:\n");
    for(int i = 0; i < tamanho ; i ++){
        printf("Valor da posicao %d : \n", i);
        scanf("%d", &vetor1[i]);
    }
    
    printf("\n\n");
    
    printf("Preenchendo o vetor 2:\n");
    for(int i = 0; i < tamanho ; i ++){
        printf("Valor da posicao %d : \n", i);
        scanf("%d", &vetor2[i]);
    }
}

int main()
{
    int tamanho = 10;
    int vetor1[tamanho];
    int vetor2[tamanho];
    int vetor3[tamanho];
    
    solicitarValores(vetor1,vetor2,tamanho);
    preencheTerceiroVetor(vetor1,vetor2,vetor3, tamanho);
    imprimeVetor(vetor3, tamanho);

    return 0;
}
