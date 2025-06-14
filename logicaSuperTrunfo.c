#include <stdio.h>
 
int main() {

    char Estado1;
    char codigo1[4];
    char cidade1[20];
    unsigned long int populacao1;
    float km1;
    float pib1;
    int turistico1;

    char Estado2;
    char codigo2[4];
    char cidade2[20];
    unsigned long int populacao2;
    float km2;
    float pib2;
    int turistico2;

    float densidade1, densidade2;
    float pibper1, pibper2;
    float superpoder1, superpoder2;
    int opcao;



    //Cidade 1
    printf("Estado (ex: De A a H): ");
    scanf(" %c", &Estado1);
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); //para funcionar com espaço: %[^\n]s
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &km1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico1);

    //Cidade 2
    printf("\nCarta 2\n\nEstado (ex: De A a H): ");
    scanf(" %c", &Estado2);
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); //para funcionar com espaço: %[^\n]s
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &km2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico2);
    
        //Calculo da Densidade
    densidade1 = (float)(populacao1 / km1);
    densidade2 = (float)(populacao2 / km2);

    //Calculo do Pib per Capita
    pibper1 = (float)(pib1* 1000000000) / populacao1;     // Multiplicar para 1 Bilhão para  funcionar nas casas Decimais
    pibper2 = (float)(pib2* 1000000000) / populacao2;

    superpoder1 = populacao1 + km1 + pib1 + turistico1 + pibper1 + (1 / densidade1);
    superpoder2 = populacao2 + km2 + pib2 + turistico2 + pibper2 + (1 / densidade2);

    //Exibição da Carta 1

    printf ("\n****Carta 1****\n\n");

    printf("Estado: %c \n",Estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n",cidade1);
    printf("População: %lu \n",populacao1);
    printf("Área: %.2f km²\n",km1);             // %.2f para 2 cassas decimais
    printf("PIB: %.2f Bilhoes de Reais\n",pib1);
    printf("Pontos Turísticos: %d \n",turistico1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("PIB per Capita: %.2f \n", pibper1);
    printf("Superpoder: %.2f\n", superpoder1);

    //Exibição da Carta 2

    printf ("\n****Carta 2****\n\n");

    printf("Estado: %c \n",Estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n",cidade2);
    printf("População: %lu \n",populacao2);
    printf("Área: %.2f km²\n",km2);            // %.2f para 2 cassas decimais
    printf("PIB: %.2f Bilhoes de Reais\n",pib2);
    printf("Pontos Turísticos: %d \n",turistico2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per Capita: %.2f \n", pibper2);
    printf("Superpoder: %.2f\n", superpoder2);

    //Menu Interativo

    printf("\n==== Escolha um Atributo para Comparar ====\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha Alguma das Opções: (1-7)\n");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        if(populacao1 > populacao2){
        printf("%s Venceu Por Ter mais População que %s: Carta 1: %lu Carta 2: %lu\n", cidade1, cidade2, populacao1, populacao2);       // aq e para aparecer  1 o nome da cidade 2 nome da cidade 3 numero da populçao da carta 1 4 numero da populaçao da carta 2
    } else if (populacao2 > populacao1){
        printf("%s Venceu Por Ter mais População que %s: Carta 1: %lu Carta 2: %lu\n", cidade2, cidade1, populacao1, populacao2);
    } else {
        printf("Empate! %s Tem a mesma População que %s: Carta 1: %lu Carta 2: %lu\n", cidade1, cidade2, populacao1, populacao2);
    } 
    
        break;
    case 2:
         if (km1 > km2)
         {
            printf(" %s Venceu Por Ter Mais Área que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade1, cidade2, km1, km2);
         } else if (km2 > km1)
         {
            printf(" %s Venceu Por Ter Mais Área que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade2, cidade1, km1, km2);
         } else{
            printf("Empate! %s Tem a Mesma Área que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade1, cidade2, km1, km2);
         }
        
        break;
    case 3:
         if (pib1 > pib2)
         {
            printf(" %s Venceu Por Ter Mais PIB que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade1, cidade2, pib1, pib2);
         } else if (pib2 > pib1)
         {
            printf(" %s Venceu Por Ter Mais PIB que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade2, cidade1, pib1, pib2);
         } else{
            printf("Empate! %s Tem o Mesmo PIB que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade1, cidade2, pib1, pib2);
         }
        
        break;
    case 4:
         if (turistico1 > turistico2)
         {
            printf(" %s Venceu Por Ter Mais Pontos Turísticos que %s: Carta 1: %d Carta 2: %d\n", cidade1, cidade2, turistico1, turistico2);
         } else if (turistico2 > turistico1)
         {
            printf(" %s Venceu Por Ter Mais Pontos Turísticos que %s: Carta 1: %d Carta 2: %d\n", cidade2, cidade1, turistico1, turistico2);
         } else{
            printf("Empate! %s Tem o Mesma Quantidade de Pontos Turísticos que %s: Carta 1: %d Carta 2: %d\n", cidade1, cidade2, turistico1, turistico2);
         }
        
        break;             
    case 5:
         if (densidade1 < densidade2)
         {
            printf(" %s Venceu Por Ter Menos Densidade que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade1, cidade2, densidade1, densidade2);
         } else if (densidade2 < densidade1)
         {
            printf(" %s Venceu Por Ter Menos Densidade que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade2, cidade1, densidade1, densidade2);
         } else{
            printf("Empate! %s Tem a Mesma Densidade que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade1, cidade2, densidade1, densidade2);
         }
        
        break;
    case 6:
         if (pibper1 > pibper2)
         {
            printf(" %s Venceu Por Ter Mais PIB Per Capita que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade1, cidade2, pibper1, pibper2);
         } else if (pibper2 > pibper1)
         {
            printf(" %s Venceu Por Ter Mais PIB Per Capita que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade2, cidade1, pibper1, pibper2);
         } else{
            printf("Empate! %s Tem o Mesmo PIB Per Capita que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade1, cidade2, pibper1, pibper2);
         }
        
        break;
    case 7:
         if (superpoder1 > superpoder2)
         {
            printf(" %s Venceu Por Ter o SuperPoder mais Forte que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade1, cidade2, superpoder1, superpoder2);
         } else if (superpoder2 > superpoder1)
         {
            printf(" %s Venceu Por Ter o SuperPoder mais Forte que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade2, cidade1, superpoder1, superpoder2);
         } else{
            printf("Empate! %s Tem a Mesma Força do SuperPoder que %s: Carta 1: %.2f Carta 2: %.2f\n", cidade1, cidade2, superpoder1, superpoder2);
         }
        
        break;        
    default:
    printf("Opção Inválida! Escolha uma das Opções (1 a 7)");
        break;
    }
    
    return 0;
    
}