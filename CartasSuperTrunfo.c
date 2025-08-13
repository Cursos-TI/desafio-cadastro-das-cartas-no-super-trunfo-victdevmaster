#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1[20];
    char estado2[20];
    char codigo_c1[4], codigo_c2[4];
    char cidade_1[20], cidade_2[20];
    int popula_1, popula_2;
    float area_km1, area_km2;
    float pib1, pib2;
    int point_tur1, point_tur2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Carta 1

    printf("Digite o estado da carta 1: \n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo_c1);

    printf("Digite a cidade da carta 1: \n");
    scanf("%s", cidade_1);    

    printf("Digite a população da carta 1: \n");
    scanf("%d", &popula_1);   

    printf("Digite a área em KM da carta 1: \n");
    scanf("%f", &area_km1);   

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);   

    printf("Digite o total de pontos turísticos da carta 1: \n");
    scanf("%d", &point_tur1);    

    // Carta 2

    printf("Digite o estado da carta 2: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo_c2);

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", cidade_2); 

    printf("Digite a população da carta 2: \n");
    scanf("%d", &popula_2);
 
    printf("Digite a área em KM da carta 2: \n");
    scanf("%f", &area_km2);   
    
    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2); 

    printf("Digite o total de pontos turísticos da carta 2: \n");
    scanf("%d", &point_tur2);   

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("--Dados da Carta 1--\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_c1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", popula_1);
    printf("Área: %f\n", area_km1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %d\n\n", point_tur1);

    printf("--Dados da Carta 2--\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_c2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", popula_2);
    printf("Área: %f\n", area_km2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d", point_tur2);

    

    return 0;
}
