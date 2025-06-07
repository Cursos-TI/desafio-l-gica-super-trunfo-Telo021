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




    //Cidade 1
    printf("Estado (ex: De A a H): ");
    scanf(" %c", &Estado1);
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", &cidade1); //para funcionar com espaço: %[^\n]s
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
    scanf(" %[^\n]s", &cidade2); //para funcionar com espaço: %[^\n]s
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
    printf("Área %.2f km²\n",km2);            // %.2f para 2 cassas decimais
    printf("PIB: %.2f Bilhoes de Reais\n",pib2);
    printf("Pontos Turísticos: %d \n",turistico2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per Capita: %.2f \n", pibper2);
    printf("Superpoder: %.2f\n", superpoder2);

    //Conparação das Cartas

    printf("\n==== Resultados das Comparações ====\n\n");
    
    if(populacao1 > populacao2){
        printf("A População da Carta 1 é Maior! \n");
    } else {
        printf("A População da Carta 2 é Maior! \n");
    }
    
    if(km1 > km2){
        printf("A Área da Carta 1 é Maior! \n");
    } else {
        printf("A Área da Carta 2 é Maior! \n");
    }
    
    if(pib1 > pib2){
        printf("O PIB da Carta 1 é Maior! \n");
    } else {
        printf("O PIB da Carta 2 é Maior! \n");
    }

    if(turistico1 > turistico2) {
        printf("Carta 1 Tem mais Pontos Turísticos! \n");
    } else {
        printf("Carta 2 Tem mais Pontos Turísticos! \n");
    }

    if(densidade1 < densidade2){
        printf("A Densidade da Carta 1 Venceu! \n");
    } else {
        printf("A Densidade da Carta 2 Venceu! \n");
    }

    if(pib1 > pib2){
        printf("PIB Per Capita da Carta 1 é Maior! \n");
    } else {
        printf("PIB Per Capita da Carta 2 é Maior! \n");
    }

    if(superpoder1 > superpoder2){
        printf("O Superpoder da Carta 1 Venceu! \n");
    } else {
        printf("O Superpoder da Carta 2 Venceu! \n");
    }

    return 0;
    
}