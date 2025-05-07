#include <stdio.h>
int main (){

//declaração das variáveis.
    int populacao1;
    float area1, pib1, densidade1, pibpcap1;
    int pturisticos1;
    float superPoder1, superPoder2;

    densidade1 = (populacao1 / area1);
    pibpcap1 = (pib1 / populacao1);

    int populacao2;
    float area2, pib2, densidade2, pibpcap2;
    int pturisticos2;
    
    densidade1 = (populacao2 / area2);
    pibpcap1 = (pib2 / populacao2);
//entrada de dados
    printf("Digite a população do RJ: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a area de RJ: \n");
    scanf("%f", &area1);
    
    printf("Digite o pib de RJ: \n");
    scanf("%f", &pib1);
    
    printf("Digite os pontos turisticos de RJ: \n");
    scanf("%f", &pturisticos1);

    printf("A população do RJ é de: %d\n", populacao1);      
    printf("A área do RJ é de: %.2f\n", area1);
    printf("Os pontos turísticos: %.2d\n", pturisticos1);
    printf("O pib do RJ é de: %.2f\n", pib1);
    densidade1 = (populacao1 / area1);
    printf("A densidade poopulacional do RJ é de: %2.f\n", &densidade1);
    pibpcap1 = (pib1 / populacao1);
    printf("O PIB per capita é do RJ: %.2f\n", &pibpcap1);

            printf("Digite a população de SP: \n");
            scanf("%d", &populacao2);
    
            printf("Digite a areade SP: \n");
            scanf("%f", &area2);
        
            printf("Digite o pib de SP: \n");
            scanf("%f", &pib2);  
        
            printf("Digite os pontos turisticos de SP: \n");
            scanf("%d", &pturisticos2);

            printf("A população de SP é de: %d\n", populacao2);
            printf("A área do SP é de: %.2f\n", area2);
            printf("Os pontos turísticos de SP são: %.2d\n", pturisticos2);
            printf("O pib de SP é de: %.2f\n", pib2);
            printf("A densidade poopulacional de SP é de: %2.f\n", &densidade2);
            printf("O PIB per capita é de SP: %.2f\n", &pibpcap2);
    //aplicaçã do super poder, consegui aplicar a estrutura if, if-else, embora nao seja pedido no trabalho, achei interesante assim.
    superPoder1 = populacao1 + area1 + pib1 + pturisticos1 + densidade1;  
    superPoder2 = populacao2 + area2 + pib2 + pturisticos2 + densidade2;
         
    if (superPoder1 > superPoder2) {
        printf("Rj venceu");
      } else {
        printf("SP venceu");
      }
       
            
    return 0;
}
