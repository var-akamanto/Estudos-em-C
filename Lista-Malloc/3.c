#include <stdio.h>
#include <stdlib.h>

struct Lista{
    int proximo;
    int anterior;
    int codigo;
};


void Incluir(struct Lista* minhaLista, int contador,int codigo){
    minhaLista[contador].anterior = 0;
    minhaLista[contador].codigo = codigo;
    minhaLista[contador].proximo = 0;
    
    if(contador>0){
        minhaLista[contador -1].proximo = minhaLista[contador].codigo;
        minhaLista[contador].anterior = minhaLista[contador - 1].codigo;
    }
}

void Listar(struct Lista* minhaLista, int contador){
    for(int i = 0 ; i < contador;i++){
        printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Codigo anterior : %d\n", minhaLista[i].anterior);
        printf("Codigo atual : %d\n", minhaLista[i].codigo);
        printf("Proximo codigo : %d\n", minhaLista[i].proximo);
        printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }
}


int main()
{
    int resp = 666;
    int contador = 0;
    struct Lista* minhaLista;
    int codigo;
    
    minhaLista = 0;
    
    do{
        printf("\n1 - Incluir\n2 - Listar\n3 - Sair\n");
        scanf("%d",&resp);
        
        switch(resp){
            case 1:
                if(contador == 0){
                    minhaLista = (struct Lista*) malloc(sizeof(struct Lista));
                }else{
                    minhaLista = (struct Lista*) realloc(minhaLista, sizeof(struct Lista) * (contador + 1));
                }
                
                printf("Informe o código : ");
                scanf("%d", &codigo);
                
                Incluir(minhaLista, contador, codigo);
                contador++;
                break;
            case 2:
                if(contador==0){
                    printf("Não há nenhuma lista.");
                }else{
                    Listar(minhaLista, contador);    
                }
                break;
        }
    }while(resp != 3);
    
    return 0;
}
