#include <stdio.h>

int main (){

    // VARIÁVEIS DE ENTRADA DE CARTAS 1 E 2
    char estado1, estado2;
    char codigodacarta1[4], codigodacarta2[4];
    char nomedacidade1[25], nomedacidade2[25];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;

    printf("Bem vindo ao sistema de CARTAS SUPER TRUNFO!\n");
    printf("Você irá cadastrar informações de duas cartas diferentes!\n\n");

    // CARTA 1 - ENTRADA DE INFORMAÇÕES
    printf("--------------- CARTA 1 ---------------\n");

    printf("Digite uma letra de 'A' a 'H' (representando um estado)\n");
    scanf(" %c", &estado1);

    printf("Repita a letra do estado, e acrescente um número de '01' a '04'\n");
    scanf("%3s", codigodacarta1);

    printf("Digite o nome de uma cidade!\n");
    scanf("%24s", nomedacidade1);

    printf("Digite o número de habitantes da cidade!\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrado(km²)!\n");
    scanf("%f", &area1);

    printf("Digite o valor do produto interno bruto(PIB) da cidade!\n");
    scanf("%f", &pib1);

    printf("Digite em números, a quantidade de pontos turísticos da cidade!\n");
    scanf("%d", &pontosturisticos1);

    printf("Informações Cadastradas com sucesso!\n\n");

    // CARTA 2 - ENTRADA DE INFORMAÇÕES
    printf("--------------- CARTA 2 ---------------\n");

    printf("Digite uma letra de 'A' a 'H' (representando um estado)\n");
    scanf(" %c", &estado2);

    printf("Repita a letra do estado, e acrescente um número de '01' a '04'\n");
    scanf("%3s", codigodacarta2);

    printf("Digite o nome de uma cidade!\n");
    scanf("%24s", nomedacidade2);

    printf("Digite o número de habitantes da cidade!\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrado(km²)!\n");
    scanf("%f", &area2);

    printf("Digite o valor do produto interno bruto(PIB) da cidade!\n");
    scanf("%f", &pib2);

    printf("Digite em números, a quantidade de pontos turísticos da cidade!\n");
    scanf("%d", &pontosturisticos2);

    // SAÍDA DE DADOS CADASTRADOS!
    printf("\n-------- CARTA 1 --------\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\n-------- CARTA 2 --------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
