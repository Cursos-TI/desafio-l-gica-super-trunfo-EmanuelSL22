#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int carta1;

   char estado[30];
   char codigo[10];
   char nome[50];
   unsigned long int populaçao;
   float area;
   float pib;
   int pontoturistico;
   float Densidade;
   float Percapita;
   float superpoder;
   int opcao;

   int carta2;

   char estado2[30];
   char codigo2[10];
   char nome2[50];
   unsigned long int populaçao2;
   float area2;
   float pib2;
   int pontoturistico2;
   float densidade2;
   float percapita2;
   float superpoder2;

   printf("$$$ SUPER TRUNFO! $$$\n");
   printf("1. iniciar o Jogo $\n");
   printf("2. Regras do Jogo #\n");
   printf("3. Sair do Jogo!\n");
   printf("Escolha uma opção: ");
   scanf("%d", &opcao);

   switch (opcao)
   {
   case 1:
    printf("Digite o Estado: \n");
   scanf("%s", &estado);

   printf("Digite o Código da carta: \n");
   scanf("%s", &codigo);

   printf("Digite o Nome: \n");
   scanf("%s", &nome);

   printf("Digite a População: \n");
   scanf("%u", &populaçao);

   printf("Digite a Área: \n");
   scanf("%f", &area);

   printf("Digite o PIB: \n");
   scanf("%f", &pib);

   printf("Digite o Número de pontos turísticos: \n");
   scanf("%d", &pontoturistico);

   printf("Carta1\n", carta1);

   printf("Estado: %s\n", estado);
   printf("Código da carta: %s\n", codigo);
   printf("Nome da cidade: %s\n", nome);
   printf("População: %u\n", populaçao);
   printf("Área: %.2f Km²\n", area);
   printf("PIB: %.2f bilhões de reais\n", pib);
   printf("Número de pontos turísticos: %d\n", pontoturistico);

   Densidade = (populaçao / area);
   Percapita = (populaçao / pib);

   printf("Densidade populacional: %.2f hab.Km²\n", Densidade);
   printf("PIB Per Capita: %.2f reais\n", Percapita);

  
   printf("Digite o Estado: \n");
   scanf("%s", &estado2);

   printf("Digite o Código da carta: \n");
   scanf("%s", &codigo2);

   printf("Digite o Nome da Cidade: \n");
   scanf("%s", &nome2);

   printf("Digite a População: \n");
   scanf("%u", &populaçao2);

   printf("Digite a Área: \n");
   scanf("%f", &area2);

   printf("Digite o PIB: \n");
   scanf("%f", &pib2);

   printf("Digite o Número de pontos turísticos: \n");
   scanf("%d", &pontoturistico2);

   printf("Carta2\n", carta2);
   
   printf("Estado: %s\n", estado2);
   printf("Código da carta: %s\n", codigo2);
   printf("Nome da cidade: %s\n", nome2);
   printf("População: %d\n", populaçao2);
   printf("Área: %.2f Km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Número de pontos turísticos: %d\n", pontoturistico2);

   densidade2 = (populaçao2 / area2);
   percapita2 = (populaçao2 / pib2);

   printf("Densidade populacional: %.2f hab.Km²\n", densidade2);
   printf("PIB Per Capita: %.2f reais\n", percapita2);

   superpoder = (populaçao + area + pib + Percapita / Densidade);
   superpoder2 = (populaçao2 + area2 + pib2 + percapita2 / densidade2);



    printf("\nCarta 1-População: %u\n", populaçao);
    printf("Carta 2-População: %u\n", populaçao2);
     if (populaçao > populaçao2)
    {
        printf("Carta 1 %s venceu!\n", nome);
    } else if (populaçao < populaçao2)
    {
        printf("Carta 2 %s venceu!\n", nome2);
    } else {
        printf("### Empate! ###\n");
    }
    
    
    printf("\nCarta 1-Área: %.2f\n", area);
    printf("Carta 2-Área: %.2f\n", area2);
    if (area > area2)
    {
        printf("Carta 1 %s venceu!\n", nome);
    } else if (area < area2)
    {
        printf("Carta 2 %s venceu!\n", nome2);
    } else {
        printf("### Empate! ###\n");
    }
    
    
    printf("\nCarta 1-PIB: %.2f\n", pib);
    printf("Carta 2-PIB: %.2f\n", pib2);
    if (pib > pib2)
    {
        printf("Carta 1 %s venceu!\n", nome);
    } else if (pib < pib2)
    {
        printf("Carta 2 %s venceu!\n", nome2);
    } else {
        printf("### Empate! ###\n");
    }
    
    
    printf("\nCarta 1-Número de pontos turísticos: %d\n", pontoturistico);
    printf("Carta 2-Número de pontos turísticos: %d\n", pontoturistico2);
    if (pontoturistico > pontoturistico2)
    {
        printf("Carta 1 %s venceu!\n", nome);
    } else if (pontoturistico < pontoturistico2)
    {
        printf("Carta 2 %s venceu!\n", nome2);
    } else {
        printf("### Empate! ###\n");
    }
    
    
    printf("\nCarta 1-Densidade populacional: %.2f\n", Densidade);
    printf("Carta 2-Densidade populacional: %.2f\n", densidade2);
    if (Densidade < densidade2)
    {
        printf("Carta 1 %s venceu!\n", nome);
    } else if (Densidade > densidade2)
    {
        printf("Carta 2 %s venceu!\n", nome2);
    } else {
        printf("### Empate! ###\n");
    }
    
    
    printf("\nCarta 1-Per Capita: %.2f\n", Percapita);
    printf("Carta 2-Per Capita: %.2f\n", percapita2);
    if (Percapita > percapita2)
    {
        printf("Carta 1 %s venceu!\n", nome);
    } else if (Percapita < percapita2)
    {
        printf("Carta 2 %s venceu!\n", nome2);
    } else {
        printf("### Empate! ###\n");
    }
    
    
    printf("\nCarta 1-Super Poder: %.2f\n", superpoder);
    printf("Carta 2-Super Poder: %.2f\n", superpoder2);
    if (superpoder > superpoder2)
    {
        printf("Carta 1 %s venceu!\n", nome);
    } else if (superpoder < superpoder2)
    {
        printf("Carta 2 %s venceu!\n", nome2);
    } else {
        printf("### Empate! ###\n");
    }
    

    break;
   case 2:
    printf("\nRegras do SUPER TRUNFO\n");
    printf("O jogo baseia-se na comparação dos valores de sua carta com a dos outros jogadores.\n");
    printf("O maior valor escolhido ou menor (em alguns casos) vence!\n");
    break;
   case 3:
    printf("Saindo do jogo... :C\n");
    break;
   
   default:
    printf("ESCOLHA INVÁLIDA!!!!!!!!!\n");
    break;
   }



   


    


    







    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
