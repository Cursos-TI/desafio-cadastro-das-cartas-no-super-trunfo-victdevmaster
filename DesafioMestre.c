#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[20];          // Nome do estado, usando array de char
    char codigo[4];           // Código da cidade, 4 caracteres é suficiente
    char nome[20];            // Nome da cidade, 20 caracteres deve funcionar
    unsigned long int populacao;  // Usando unsigned long int pra populações grandes, conforme o desafio
    float area;               // Área em km², float pra valores decimais
    float pib;                // PIB em bilhões, float também
    int pontos_turisticos;    // Quantidade de pontos turísticos, int tá ok
    float densidade_demografica;  // Vou calcular isso depois
    float pib_per_capita;     // Novo campo pra calcular PIB per capita
    float super_poder;        // Campo pra somar todos os atributos
} Carta;

void calcularAtributos(Carta *carta) {
    // Calculando densidade demográfica: população dividida por área, zero se área for zero
    carta->densidade_demografica = (carta->area > 0) ? (float)carta->populacao / carta->area : 0;
    // Calculando PIB per capita: PIB dividido por população, convertendo pra float
    carta->pib_per_capita = (carta->populacao > 0) ? carta->pib / (float)carta->populacao : 0;
    // Calculando Super Poder: somando população, área, PIB, pontos turísticos, PIB per capita e inverso da densidade
    float inverso_densidade = (carta->densidade_demografica > 0) ? 1.0 / carta->densidade_demografica : 0;
    carta->super_poder = (float)carta->populacao + carta->area + carta->pib + carta->pontos_turisticos + carta->pib_per_capita + inverso_densidade;
    // Verificando se as conversões pra float foram feitas corretamente
}

void cadastrarCarta(Carta *carta, int numero) {
    printf("Digite o estado da carta %d: \n", numero);
    scanf("%s", carta->estado);
    printf("Digite o codigo da carta %d: \n", numero);
    scanf("%s", carta->codigo);
    printf("Digite a cidade da carta %d: \n", numero);
    scanf("%s", carta->nome);
    printf("Digite a populacao da carta %d: \n", numero);
    scanf("%lu", &carta->populacao);  // Usando %lu pra unsigned long int
    printf("Digite a area em KM da carta %d: \n", numero);
    scanf("%f", &carta->area);
    printf("Digite o PIB da carta %d: \n", numero);
    scanf("%f", &carta->pib);
    printf("Digite o total de pontos turisticos da carta %d: \n", numero);
    scanf("%d", &carta->pontos_turisticos);
    calcularAtributos(carta);  // Chamando a função pra calcular os atributos
}

void exibirCarta(Carta carta, int numero) {
    printf("\n--Dados da Carta %d--\n", numero);
    printf("Estado: %s\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nome);
    printf("Populacao: %lu\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhoes\n", carta.pib);
    printf("Pontos Turisticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Demografica: %.2f hab/km²\n", carta.densidade_demografica);
    printf("PIB per Capita: %.2f\n", carta.pib_per_capita);
    printf("Super Poder: %.2f\n", carta.super_poder);
    // Exibindo todos os dados calculados
}

void compararCartas(Carta carta1, Carta carta2) {
    printf("\nComparacao de Cartas:\n");

    // Comparando População: maior valor vence
    printf("Populacao: ");
    if (carta1.populacao > carta2.populacao) {
        printf("Carta 1 venceu\n");
    } else if (carta2.populacao > carta1.populacao) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate \n");
    }

    // Comparando Área: maior valor vence
    printf("Area: ");
    if (carta1.area > carta2.area) {
        printf("Carta 1 venceu (1)\n");
    } else if (carta2.area > carta1.area) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate (0)\n");
    }

    // Comparando PIB: maior valor vence
    printf("PIB: ");
    if (carta1.pib > carta2.pib) {
        printf("Carta 1 venceu (1)\n");
    } else if (carta2.pib > carta1.pib) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate (0)\n");
    }

    // Comparando Pontos Turísticos: maior valor vence
    printf("Pontos Turisticos: ");
    if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
        printf("Carta 1 venceu (1)\n");
    } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate (0)\n");
    }

    // Comparando Densidade Populacional: menor valor vence
    printf("Densidade Populacional: ");
    if (carta1.densidade_demografica < carta2.densidade_demografica) {
        printf("Carta 1 venceu (1)\n");
    } else if (carta2.densidade_demografica < carta1.densidade_demografica) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate (0)\n");
    }

    // Comparando PIB per Capita: maior valor vence
    printf("PIB per Capita: ");
    if (carta1.pib_per_capita > carta2.pib_per_capita) {
        printf("Carta 1 venceu (1)\n");
    } else if (carta2.pib_per_capita > carta1.pib_per_capita) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate (0)\n");
    }

    // Comparando Super Poder: maior valor vence
    printf("Super Poder: ");
    if (carta1.super_poder > carta2.super_poder) {
        printf("Carta 1 venceu (1)\n");
    } else if (carta2.super_poder > carta1.super_poder) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate (0)\n");
    }

}

int main() {
    // Definindo as duas cartas
    Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("Digite o estado da carta 1: \n");
    scanf("%s", carta1.estado);
    printf("Digite o codigo da carta 1: \n");
    scanf("%s", carta1.codigo);
    printf("Digite a cidade da carta 1: \n");
    scanf("%s", carta1.nome);
    printf("Digite a populacao da carta 1: \n");
    scanf("%lu", &carta1.populacao);  // Usando %lu pra unsigned long int
    printf("Digite a area em KM da carta 1: \n");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &carta1.pib);
    printf("Digite o total de pontos turisticos da carta 1: \n");
    scanf("%d", &carta1.pontos_turisticos);
    calcularAtributos(&carta1);  // Calculando os atributos da Carta 1

    // Cadastro da Carta 2
    printf("\nDigite o estado da carta 2: \n");
    scanf("%s", carta2.estado);
    printf("Digite o codigo da carta 2: \n");
    scanf("%s", carta2.codigo);
    printf("Digite a cidade da carta 2: \n");
    scanf("%s", carta2.nome);
    printf("Digite a populacao da carta 2: \n");
    scanf("%lu", &carta2.populacao);
    printf("Digite a area em KM da carta 2: \n");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &carta2.pib);
    printf("Digite o total de pontos turisticos da carta 2: \n");
    scanf("%d", &carta2.pontos_turisticos);
    calcularAtributos(&carta2);  // Calculando os atributos da Carta 2

    // Exibindo os dados das cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    // Comparando as cartas
    compararCartas(carta1, carta2);

    return 0;
}