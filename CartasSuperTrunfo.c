#include <stdio.h>
int main (){
    int populacao1;
    float area1, pib1;
    int pturisticos1;

    int populacao2;
    float area2, pib2;
    int pturisticos2;

    printf("Digite a população do RJ: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a area de RJ: \n");
    scanf("%f", &area1);
    
    printf("Digite o pib de RJ: \n");
    scanf("%f", pib1);
    
    printf("Digite os pontos turisticos de RJ: \n");
    scanf("%d", &populacao1);

    printf("A população do RJ é de: %d - Area de: %f \n", populacao1, area1);
    printf("Os pontos turísticos: %f - Com pib de: %f \n", pturisticos1, pib1);
    

            printf("Digite a população de SP: \n");
            scanf("%d", &populacao2);
    
            printf("Digite a areade SP: \n");
            scanf("%f", &area2);
        
            printf("Digite o pib de SP: \n");
            scanf("%f", pib2);    
        
            printf("Digite os pontos turisticos de SP: \n");
            scanf("%f", &pturisticos2);

                printf("A população do SP é de: %d - Area de: %f \n", populacao2, area2);
                printf("Os pontos turísticos de SP: %f - Com pib de: %f \n", pturisticos2, pib2);
         
    return 0;

}