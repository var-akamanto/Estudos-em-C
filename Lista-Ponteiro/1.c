#include <stdio.h>

struct Area {
  int comprimento;
  int largura;
  int area;
};


void carregarStruct(struct Area * structArea, int tamanho){
    for(int i = 0; i < tamanho; i++){
        structArea[i].area = (structArea[i].comprimento * structArea[i].largura);
    }
}




int main()
{
    struct Area areas[10];
    
    // Preenchendo os valores de comprimento e largura para teste
    for (int i = 0; i < 10; i++) {
        areas[i].comprimento = i + 1;
        areas[i].largura = i + 2;
    }
    
    carregarStruct(areas,10);
    for(int i=0;i<10;i++){
        printf("O valor da area da estrutura %d é : %d\n",i,areas[i].area);
    }

    return 0;
}