#include <stdio.h>
#include <ctype.h>

int main()
{
    int num_sexo, sexo_feminino, sexo_masculino, sexo_outro, idade;
    int num_satisfacao, insatisfeitos, neutro, satisfeitos;
    int recomenda, recomenda_s, recomenda_n, recomenda_t;
    int motivo, motivo_qualidade, motivo_preco, motivo_amigos, motivos_funcionalidades, motivo_outro;
    char nova_leitura;
    
    float media_idades;
    int contador_18_a_40, contador_41_a_60, contador_satisfacao;
    float f_Insatisfeitos, m_Insatisfeitos, ni_Insatisfeitos, f_satisfeitos, m_satisfeitos, ni_satisfeitos, f_neutros, m_neutros, ni_neutros = 0;
    
    printf("--------------------------PESQUISA--------------------------");
    
    do{
        printf("\nSexo \n[1] Feminino \n[2] Masculino \n[3] Prefiro não informar\n");
        scanf("%d", &num_sexo);
        
        while(num_sexo < 1 || num_sexo > 3){
            printf("Opção inválida, digite \n[1] Feminino \n[2] Masculino \n[3] Prefiro não informar\n");
            scanf("%d", &num_sexo);
        }
         
        switch(num_sexo){
            case 1:
                sexo_feminino++;
                break;
            case 2:
                sexo_masculino++;
                break;
            default:
                sexo_outro++;
                break;
        }
        
        printf("\nIdade [18, 130]: ");
        scanf("%d", &idade);
    
        while(idade < 18 || idade > 130){
            printf("Valor inválido, digite [18, 130]: ");
            scanf("%d", &idade);
        }
        media_idades += idade;
        
        if(idade > 17 && idade < 41){
            contador_18_a_40++;
        }else{
            if(idade > 40 && idade < 61){
                contador_41_a_60++;
            }
        }
        
        printf("\nEm uma escala de 1 a 5, quão satisfeito você está com o nosso serviço? \n[1] Muito insatisfeito \n[2] Insatisfeito \n[3] Neutro \n[4] Satisfeito \n[5] Muito satisfeito\n");
        scanf("%d", &num_satisfacao);
            
        while(num_satisfacao < 1 || num_satisfacao > 5){
            printf("Opção inválida, digite \n[1] Muito insatisfeito \n[2] Insatisfeito \n[3] Neutro \n[4] Satisfeito \n[5] Muito satisfeito\n");
            scanf("%d", &num_satisfacao);
        }
        
        switch(num_satisfacao){
            case 1: 
            case 2:
                insatisfeitos++;
                if (num_sexo == 1)
                {
                    f_Insatisfeitos++;
                }
                if(num_sexo == 2)
                {
                    m_Insatisfeitos++;
                }
                if (num_sexo == 3)
                {
                    ni_Insatisfeitos++;
                }
                break;
            case 3:
                neutro++;
                if (num_sexo == 1)
                {
                    f_neutros++;
                }
                if(num_sexo == 2)
                {
                    m_neutros++;
                }
                if (num_sexo == 3)
                {
                    ni_neutros++;
                }
                break;
            default:
                satisfeitos++;
                if (num_sexo == 1)
                {
                    f_satisfeitos++;
                }
                if(num_sexo == 2)
                {
                    m_satisfeitos++;
                }
                if (num_sexo == 3)
                {
                    ni_satisfeitos++;
                }
                break;
        }
        
        contador_satisfacao++;
    
        printf("\nVocê recomendaria nosso serviço para um amigo?\n");
        printf("[1] Sim\n");
        printf("[2] Não\n");
        printf("[3] Talvez\n");
        scanf("%d", &recomenda);
        while(recomenda < 1 || recomenda > 3){
            printf("Opção inválida, digite \n[1] Sim \n[2] Não \n[3] Talvez\n");
            scanf("%d", &recomenda);
        }
        switch (recomenda)
        {
            case 1:
            recomenda_s++;
            break;
            case 2:
            recomenda_n++;
            break;
            default:
            recomenda_t++;
            break;
        }
        
        printf("\nQual é o principal motivo pelo qual você escolheu\n");
        printf("[1] Qualidade\n");
        printf("[2] Preço\n");
        printf("[3] Recomendação de amigos/família\n");
        printf("[4] Funcionalidades específicas\n");
        printf("[5] Outro \n");
        scanf("%d", &motivo);
        while(motivo < 1 || motivo > 5){
            printf("\nQual é o principal motivo pelo qual você escolheu\n");
        printf("[1] Qualidade\n");
        printf("[2] Preço\n");
        printf("[3] Recomendação de amigos/família\n");
        printf("[4] Funcionalidades específicas\n");
        printf("[5] Outro \n");
        scanf("%d", &motivo);
        }
        switch (motivo)
        {
            case 1:
            motivo_qualidade++;
            break;
            case 2:
            motivo_preco++;
            break;
            case 3:
            motivo_amigos++;
            break;
            case 4:
            motivos_funcionalidades++;
            break;
            default:
            motivo_outro++;
            break;
        }
        
        printf("\nNova leitura [S/N]: ");
        scanf(" %c", &nova_leitura);
        nova_leitura = toupper(nova_leitura);
        
        while(nova_leitura != 'S' && nova_leitura != 'N'){
            printf("\nOpção inválida, nova leitura? [S/N]: ");
            scanf(" %c", &nova_leitura);
            nova_leitura = toupper(nova_leitura);
        }
        
    } while(nova_leitura == 'S');
    
    printf("\n--------------------------RESULTADO--------------------------");
    
    int contador;
    float porcentagem_mulheres, porcentagem_homens, porcentagem_outros;
    float porcentagem_18_a_40, porcentagem_41_a_60, porcentagem_mais_60;
    float porcentagem_insatisfeitos, porcentagem_neutros, porcentagem_satisfeitos;
    float porcentagem_qualidade, porcentagem_preco, porcentagem_recomendacao, porcentagem_funcionalidades, porcentagem_outros_motivo;
    float pct_sim, pct_nao, pct_talvez;
    
    printf("\nPERFIL RESPONDENTES");
    contador = sexo_feminino + sexo_masculino + sexo_outro;
    printf("\nTotal de respondentes: %d", contador);
    porcentagem_mulheres = (float)sexo_feminino * 100 / contador;
    printf("\nSexo feminino: %.2f%%", porcentagem_mulheres);
    porcentagem_homens = (float)sexo_masculino * 100 / contador;
    printf("\nSexo masculino: %.2f%%", porcentagem_homens);
    porcentagem_outros = 100 - (porcentagem_homens + porcentagem_mulheres);
    printf("\nNão informou sexo: %.2f%%", porcentagem_outros);
    media_idades = media_idades / contador;
    printf("\nMédia de idade respondentes: %.2f", media_idades);
    porcentagem_18_a_40 = (float)contador_18_a_40 * 100 / contador;
    printf("\nPorcentagem de 18 a 40 anos: %.2f%%", porcentagem_18_a_40);
    porcentagem_41_a_60 = (float)contador_41_a_60 * 100 / contador;
    printf("\nPorcentagem de 41 a 60 anos: %.2f%%", porcentagem_41_a_60);
    porcentagem_mais_60 = 100 - (porcentagem_18_a_40 + porcentagem_41_a_60);
    printf("\nPorcentagem acima de 60 anos: %.2f%%", porcentagem_mais_60);
    
    printf("\n\nGRAU DE SATISFAÇÃO");
    porcentagem_insatisfeitos = insatisfeitos * 100 / contador;
    printf("\nMuito insatisfeito e Insatisfeito: %.2f%%", porcentagem_insatisfeitos);
    porcentagem_neutros = neutro * 100 / contador;
    printf("\nNeutro: %.2f%%", porcentagem_neutros);
    porcentagem_satisfeitos = satisfeitos * 100 / contador;
    printf("\nMuito satisfeitos e Satisfeitos: %.2f%%", porcentagem_satisfeitos);
    
    pct_sim = (float)recomenda_s / contador * 100;
    pct_nao = (float)recomenda_n / contador * 100;
    pct_talvez = (float)recomenda_t / contador * 100;
    printf("\n\nRECOMENDAÇÃO");
    printf("\nSim : %.2f%%", pct_sim);
    printf("\nNão : %.2f%%", pct_nao);
    printf("\nTalvez : %.2f%%", pct_talvez);
    
    printf("\n\nMOTIVO QUE ESCOLHEU NOSSO SERVIÇO");
    porcentagem_qualidade = (float)motivo_qualidade * 100 / contador;
    printf("\nQualidade: %.2f%%", porcentagem_qualidade);
    porcentagem_preco = (float)motivo_preco * 100 / contador;
    printf("\nPreço: %.2f%%", porcentagem_preco);
    porcentagem_recomendacao = (float)motivo_amigos * 100 / contador;
    printf("\nRecomendação amigos/família: %.2f%%", porcentagem_recomendacao);
    porcentagem_funcionalidades = (float)motivos_funcionalidades * 100 / contador;
    printf("\nFuncionalidades específicas: %.2f%%", porcentagem_funcionalidades);
    porcentagem_outros_motivo = (float)motivo_outro * 100 / contador;
    printf("\nOutro: %.2f%%", porcentagem_outros_motivo);
    
    printf("\n\nGRAU DE SATISFAÇÃO POR SEXO\n");
    f_Insatisfeitos = f_Insatisfeitos / (float)sexo_feminino * 100;
    m_Insatisfeitos = m_Insatisfeitos / (float)sexo_masculino * 100;
    ni_Insatisfeitos = ni_Insatisfeitos / (float)sexo_outro * 100;
    f_satisfeitos = f_satisfeitos / (float)sexo_feminino * 100;
    m_satisfeitos = m_satisfeitos / (float)sexo_masculino * 100;
    ni_satisfeitos = ni_satisfeitos / (float)sexo_outro * 100;
    f_neutros = f_neutros / (float)sexo_feminino * 100;
    m_neutros = m_neutros / (float)sexo_masculino * 100;
    ni_neutros = ni_neutros / (float)sexo_outro * 100;
    printf("Feminino\n");
    printf("Muito insatisfeito e insatisfeito : %.2f%%\n",f_Insatisfeitos);
    printf("Neutro : %.2f\n", f_neutros );
    printf("Muito satisfeito e satisfeito : %.2f%%\n", f_satisfeitos);
    
    printf("Masculino\n");
    printf("Muito insatisfeito e insatisfeito : %.2f%%\n", m_Insatisfeitos);
    printf("Neutro : %.2f\n", m_neutros );
    printf("Muito satisfeito e satisfeito : %.2f%%\n", m_satisfeitos);
    
    printf("Não informou o sexo :\n");
    printf("Muito insatisfeito e insatisfeito : %.2f%%\n", ni_Insatisfeitos);
    printf("Neutro : %.2f\n", ni_neutros);
    printf("Muito satisfeito e satisfeito : %.2f%%\n", ni_satisfeitos);
  
    return 0;
}