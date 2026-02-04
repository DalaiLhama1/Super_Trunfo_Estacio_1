#include <stdio.h>

int main () {

    //Declaração das Variáveis - Primeira Carta
    char estadoPrimeiraCarta;
    char codigoPrimeiraCarta[4];
    char nomeCidadePrimeiraCarta[15];
    int populacaoPrimeiraCarta;
    float areaPrimeiraCarta;
    float pibPrimeiraCarta;
    int pontoTuristicoPrimeiraCarta;

    //Declaração das Variáveis - Segunda Carta
    char estadoSegundaCarta;
    char codigoSegundaCarta[4];
    char nomeCidadeSegundaCarta[15];
    int populacaoSegundaCarta;
    float areaSegundaCarta;
    float pibSegundaCarta;
    int pontoTuristicoSegundaCarta;
    

    //Solicitação dos dados da primeira carta!
    printf("Vamos coletar agora, os dados da primeira carta do Super Trunfo!\n");

        //Solicitando qual o estado
        printf("Qual estado representa sua carta? (Podendo ser de 'A' a 'H')\n");
        scanf(" %c", &estadoPrimeiraCarta);

        //Solicitando o código
        printf("O codigo da sua carta e o estado dela, mais um numero de 01 a 04!\n"
                "Por exemplo: B04, H01.\n"
                "Por favor diga qual o codigo da sua carta!\n");
        scanf("%s", &codigoPrimeiraCarta);

        //Solicitando o nome
        printf("Qual o nome da cidade?\n");
        scanf("%s", &nomeCidadePrimeiraCarta);

        //Solicitando a População
        printf("Qual a populacao da cidade?\n");
        scanf(" %i", &populacaoPrimeiraCarta);

        //Solicitando área 
        printf("Qual a area da Cidade em Km²?\n");
        scanf(" %f", &areaPrimeiraCarta);

        //Solicitando PIB 
        printf("Qual o PIB da sua Cidade?\n");
        scanf(" %f", &pibPrimeiraCarta);

        //Solicitando quantidade de Ponto de Referência
        printf("Quantos pontos turisticos possui sua cidade?\n");
        scanf(" %i", &pontoTuristicoPrimeiraCarta);
       
    
    //Solicitação dos dados da segunda carta!
    printf("Vamos coletar agora, os dados da segunda carta do Super Trunfo!\n");

        //Solicitando qual o estado
        printf("Qual estado representa sua carta? (Podendo ser de 'A' a 'H')\n");
        scanf(" %c", &estadoSegundaCarta);

        //Solicitando o código
        printf("O codigo da sua carta e o estado dela, mais um numero de 01 a 04!\n"
                "Por exemplo: B04, H01.\n"
                "Por favor diga qual o codigo da sua carta!\n");
        scanf(" %s", &codigoSegundaCarta);

        //Solicitando o nome
        printf("Qual o nome da cidade?\n");
        scanf(" %s", &nomeCidadeSegundaCarta);

        //Solicitando a População
        printf("Qual a populacao da cidade?\n");
        scanf(" %i", &populacaoSegundaCarta);

        //Solicitando área 
        printf("Qual a area da Cidade em Km²?\n");
        scanf(" %f", &areaSegundaCarta);

        //Solicitando PIB 
        printf("Qual o PIB da sua Cidade?\n");
        scanf(" %f", &pibSegundaCarta);

        //Solicitando quantidade de Ponto de Referência
        printf("Quantos pontos turisticos possui sua cidade?\n");
        scanf("%i", &pontoTuristicoSegundaCarta);

    //Imprimindo ao usuário as informações da primeira carta
    printf("Informacoes da Carta 1:\n");
    printf("Estado: %c\n", estadoPrimeiraCarta);
    printf("Codigo: %s\n", codigoPrimeiraCarta);
    printf("Nome da Cidade: %s\n", nomeCidadePrimeiraCarta);
    printf("Populacao: %i habitantes\n", populacaoPrimeiraCarta);
    printf("Area: %f Km²\n", areaPrimeiraCarta);
    printf("PIB da Cidade: %f\n", pibPrimeiraCarta);
    printf("Pontos de Referencias: %i\n", pontoTuristicoPrimeiraCarta);

    //espaçamento por estética
    printf("\n")

    //Imprimindo ao usuário as informações da Segunda Carta
    printf("Informacoes da Carta 2:\n");
    printf("Estado: %c\n", estadoSegundaCarta);
    printf("Codigo: %s\n", codigoSegundaCarta);
    printf("Nome da Cidade: %s\n", nomeCidadeSegundaCarta);
    printf("Populacao: %i habitantes\n", populacaoSegundaCarta);
    printf("Area: %f Km²\n", areaSegundaCarta);
    printf("PIB da Cidade: %f\n", pibSegundaCarta);
    printf("Pontos de Referencias: %i\n", pontoTuristicoSegundaCarta);

    //função de retorno
    return 0;

}
