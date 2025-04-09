#include <stdio.h>
#include <string.h>

int main()
{
                            // Introdução ao jogo
    printf("|=========================================================|\n");
    printf("|        BEM-VINDO AO SUPER TRUNFO         |              |\n");
    printf("|==========================================|=== Países ===|\n");
    printf("|  ### Você irá cadastrar duas cartas ###  |              |\n");
    printf("|                                          |______________|\n");
    printf("| Código da carta 1 (A01-A04)              | Ex: A03      |\n");
    printf("| Código da carta 2 (B01-B04)              | Ex: B02      |\n");
    printf("| Estado letra maiúscula de A a H          | Ex: A        |\n");
    printf("| Nome da cidade                           | Ex: Manaus   |\n");
    printf("| População                                | Ex: 12325000 |\n");
    printf("| Área (em km²)                            | Ex: 1521.11  |\n");
    printf("| PIB (em bilhões de R$)                   | Ex: 699.28   |\n");
    printf("| Quantidade de pontos turísticos          | Ex: 50       |\n");
    printf("|=========================================================|\n");

                                                                    // Declaração de variáveis da primeira carta
    char codigo_1[10];
    char estado_1;
    char cidade_1[50];
    int populacao_1 = 0;
    float area_1 = 0;
    float pib_1 = 0;
    int pontos_turisticos_1 = 0;

                                                                    // Declaração de variáveis da segunda carta
    char codigo_2[10];
    char estado_2;
    char cidade_2[50];
    int populacao_2 = 0;
    float area_2 = 0;
    float pib_2 = 0;
    int pontos_turisticos_2 = 0;
    
    printf("\n");                                                     //Quebra de linha
    printf("Vamos cadastrar duas cartas!\n\n");                       // Solicitação de dados para a primeira carta

    printf(">>> CARTA 1 <<<\n");                                      // Informa cadastro carta 2
    printf("\n");                                                     //Quebra de linha
    printf("Codigo: ");                                               // Solicita o código
    scanf("%s", codigo_1);                                            // Lê o código

    printf("Estado: ");                                               // Solicita o estado
    scanf(" %c", &estado_1);                                          // Lê o estado corretamente
    getchar();                                                        // Limpa o buffer de entrada

    printf("Nome da cidade: ");                                       // Solicita o nome da cidade
    fgets(cidade_1, sizeof(cidade_1), stdin);                         // Lê o nome da cidade com espaço
    cidade_1[strcspn(cidade_1, "\n")] = 0;                            // Remove o caractere de nova linha no final da string

    printf("População: ");                                            // Solicita a população
    scanf("%d", &populacao_1);                                        // Lê a população

    printf("Área: ");                                                 // Solicita a área
    scanf("%f", &area_1);                                             // Lê a área

    printf("PIB: ");                                                  // Solicita o PIB
    scanf("%f", &pib_1);                                              // Lê o PIB

    printf("Quantidade de pontos turísticos: ");                      // Solicita o número de pontos turísticos
    scanf("%d", &pontos_turisticos_1);                                // Lê o número de pontos turísticos
    printf("\n");
                                                                      // Solicitação de dados para a segunda carta

    printf(">>> CARTA 2 <<<\n");                                      // Informa cadastro carta 2
    printf("\n");
    printf("Código: ");                                               // Solicita o código
    scanf("%s", codigo_2);                                            // Lê o código

    printf("Estado: ");                                               // Solicita o estado
    scanf(" %c", &estado_2);                                          // Lê o estado corretamente
    getchar();

    printf("Nome da cidade: ");                                       // Solicita o nome da cidade
    fgets(cidade_2, sizeof(cidade_2), stdin);                         // Lê o nome da cidade com espaço
    cidade_2[strcspn(cidade_2, "\n")] = 0;                            // Remove o caractere de nova linha no final da string

    printf("População: ");                                            // Solicita a população
    scanf("%d", &populacao_2);                                        // Lê a população

    printf("Área (km²): ");                                           // Solicita a área
    scanf("%f", &area_2);                                             // Lê a área

    printf("PIB (em bilhões R$): ");                                  // Solicita o PIB
    scanf("%f", &pib_2);                                              // Lê o PIB

    printf("Quantidade pontos turísticos: ");                         // Solicita o número de pontos turísticos
    scanf("%d", &pontos_turisticos_2);                                // Lê o número de pontos turísticos

    printf("\n>>> Cartas cadastradas com sucesso <<<\n");             // Informa cartas cadastradas

    printf("\nDados carta 1:\n");
    printf("\n");                                                     // Exibe os dados da primeira carta
    printf("Código: %s\n", codigo_1);                                 // Exibe o código
    printf("Estado: %c\n", estado_1);                                 // Exibe o estado
    printf("Nome da Cidade: %s\n", cidade_1);                         // Exibe o nome da cidade
    printf("População: %d\n", populacao_1);                           // Exibe a população
    printf("Área: %.2f km²\n", area_1);                               // Exibe a área
    printf("PIB: %.2f bilhões de reais\n", pib_1);                    // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1); // Exibe o número de pontos turísticos

                                                                      // Exibição dos dados da segunda carta

    printf("\n\nDados carta 2:\n");                                   // Exibe os dados da segunda carta
    printf("\n");                                                     // Quebra de linha 
    printf("Código: %s\n", codigo_2);                                 // Exibe o código                                                     // Exibe os dados da segunda carta
    printf("Estado: %c\n", estado_2);                                 // Exibe o estado
    printf("Nome da Cidade: %s\n", cidade_2);                         // Exibe o nome da cidade
    printf("População: %d\n", populacao_2);                           // Exibe a população
    printf("Área: %.2f km²\n", area_2);                               // Exibe a área
    printf("PIB: %.2f bilhões de reais\n", pib_2);                    // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2); // Exibe o número de pontos turísticos
    return (0);                                                       // Retorna 0 para indicar que o programa foi executado com sucesso
}