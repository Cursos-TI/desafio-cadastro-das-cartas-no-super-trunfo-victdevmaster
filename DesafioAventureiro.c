#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de cidade
typedef struct {
    char estado[20];
    char codigo[4];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica; // Calculada como população / área
} Carta;

// Função para comparar as cartas com base no atributo escolhido
void compararCartas(Carta carta1, Carta carta2, int opcao) {
    printf("\nComparando as cartas:\n");
    printf("Carta 1: %s (%s)\n", carta1.nome, carta1.estado);
    printf("Carta 2: %s (%s)\n", carta2.nome, carta2.estado);
    printf("Atributo escolhido: ");

    // Variáveis para armazenar os valores a comparar
    float valor1, valor2;
    char atributo[30];

    // Selecionar o atributo com base na opção do menu
    switch (opcao) {
        case 1:
            strcpy(atributo, "População");
            valor1 = carta1.populacao;
            valor2 = carta2.populacao;
            printf("%s\n", atributo);
            printf("%s: %d\n", carta1.nome, carta1.populacao);
            printf("%s: %d\n", carta2.nome, carta2.populacao);
            if (valor1 > valor2) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (valor2 > valor1) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            strcpy(atributo, "Área");
            valor1 = carta1.area;
            valor2 = carta2.area;
            printf("%s\n", atributo);
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            if (valor1 > valor2) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (valor2 > valor1) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            strcpy(atributo, "PIB");
            valor1 = carta1.pib;
            valor2 = carta2.pib;
            printf("%s\n", atributo);
            printf("%s: %.2f bilhões\n", carta1.nome, carta1.pib);
            printf("%s: %.2f bilhões\n", carta2.nome, carta2.pib);
            if (valor1 > valor2) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (valor2 > valor1) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            strcpy(atributo, "Pontos Turísticos");
            valor1 = carta1.pontos_turisticos;
            valor2 = carta2.pontos_turisticos;
            printf("%s\n", atributo);
            printf("%s: %d\n", carta1.nome, carta1.pontos_turisticos);
            printf("%s: %d\n", carta2.nome, carta2.pontos_turisticos);
            if (valor1 > valor2) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (valor2 > valor1) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            strcpy(atributo, "Densidade Demográfica");
            valor1 = carta1.densidade_demografica;
            valor2 = carta2.densidade_demografica;
            printf("%s\n", atributo);
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade_demografica);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade_demografica);
            // Regra especial: menor densidade vence
            if (valor1 < valor2) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (valor2 < valor1) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            return;
    }
}

int main() {
    // Definir as duas cartas
    Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("Digite o estado da carta 1: \n");
    scanf("%s", carta1.estado);
    
    printf("Digite o código da carta 1: \n");
    scanf("%s", carta1.codigo);

    printf("Digite a cidade da carta 1: \n");
    scanf("%s", carta1.nome);    

    printf("Digite a população da carta 1: \n");
    scanf("%d", &carta1.populacao);   

    printf("Digite a área em KM da carta 1: \n");
    scanf("%f", &carta1.area);   

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &carta1.pib);   

    printf("Digite o total de pontos turísticos da carta 1: \n");
    scanf("%d", &carta1.pontos_turisticos);    

    // Calcular densidade demográfica da carta 1
    carta1.densidade_demografica = (carta1.area > 0) ? (float)carta1.populacao / carta1.area : 0;

    // Cadastro da Carta 2
    printf("\nDigite o estado da carta 2: \n");
    scanf("%s", carta2.estado);

    printf("Digite o código da carta 2: \n");
    scanf("%s", carta2.codigo);

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", carta2.nome); 

    printf("Digite a população da carta 2: \n");
    scanf("%d", &carta2.populacao);
 
    printf("Digite a área em KM da carta 2: \n");
    scanf("%f", &carta2.area);   
    
    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &carta2.pib); 

    printf("Digite o total de pontos turísticos da carta 2: \n");
    scanf("%d", &carta2.pontos_turisticos);   

    // Calcular densidade demográfica da carta 2
    carta2.densidade_demografica = (carta2.area > 0) ? (float)carta2.populacao / carta2.area : 0;

    // Exibir os dados das cartas
    printf("\n--Dados da Carta 1--\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Demográfica: %.2f hab/km²\n", carta1.densidade_demografica);

    printf("\n--Dados da Carta 2--\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Demográfica: %.2f hab/km²\n", carta2.densidade_demografica);

    // Menu interativo
    int opcao;
    printf("\nBem-vindo ao Super Trunfo!\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &opcao);

    // Comparar as cartas 
    compararCartas(carta1, carta2, opcao);


    return 0;
}