#include <stdio.h>

int Maior(int number1, int number2){
    if(number1>number2){
        return number1;
    }else{
        return number2;
    }
}

float Media(int nota1, int nota2, int nota3){
    int notaNegativa = 0;
    if(nota3<0){
        notaNegativa = 1;
    }
    if(notaNegativa){
        return ((nota1 + nota2)/2);
    }else{
        return ((nota1+nota2+nota3)/3);
    }
}


int main(){
    int notas[3];
    int notasMaisAltas[2];
    int maiorNota = 0;
    int menorNota = 0;
    for(int i = 0; i<=3;i++){
        printf("Digite a %d nota do seu aluno : \n",i);
        scanf("%d", &notas[i];
    }
    
    printf("A media das 3 notas é %f\n", Media(nota1,nota2,nota3));
    for(int i=0;i <= 3;i++){
        
    }
    
    
}