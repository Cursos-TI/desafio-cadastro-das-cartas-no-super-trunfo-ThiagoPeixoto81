#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

struct CartasSuperTrunfo
{
    char nomeDaCidade[255];
    unsigned long int populacao;
    float areaEmKm;
    float pib;
    int numeroPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Criando as cartas que serão utilizadas
    struct CartasSuperTrunfo carta1;
    struct CartasSuperTrunfo carta2;
    int contador;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    for(contador = 1; contador <= 2; contador++) {
        //Criando um carta local
        struct CartasSuperTrunfo cartaLocal;
        char nomeDaCidadeLocal[255];

        //Pedindo os dados ao usuário
        printf("\n\nInsira o nome da cidade %d: ", contador);
        scanf("%s", &nomeDaCidadeLocal);
        strcpy(cartaLocal.nomeDaCidade, nomeDaCidadeLocal );

        printf("Insira a população da cidade %d: ", contador);
        scanf("%d", &cartaLocal.populacao);

        printf("Insira a Área em Km² da cidade %d: ", contador);
        scanf("%f", &cartaLocal.areaEmKm);

        printf("Insira o pib da cidade %d: ", contador);
        scanf("%f", &cartaLocal.pib);

        printf("Insira o número de pontos turísticos da cidade %d: ", contador);
        scanf("%d", &cartaLocal.numeroPontosTuristicos);

        //Calculando os atributos restantes
        cartaLocal.densidadePopulacional = (int) cartaLocal.populacao / cartaLocal.areaEmKm;

        cartaLocal.pibPerCapita = cartaLocal.pib / (int) cartaLocal.populacao;

        cartaLocal.superPoder = cartaLocal.pibPerCapita + cartaLocal.densidadePopulacional + cartaLocal.numeroPontosTuristicos + cartaLocal.areaEmKm + (int) cartaLocal.populacao;

        //Atribuindo a carta local a respectiva carta
        switch (contador) {
            case 1:
                carta1 = cartaLocal;
            break;

            case 2:
               carta2 = cartaLocal;
            break;

            default:
            break;
        }

    };

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("====================\n%s\n====================\nPopulação: %d\nÁrea em Km²: %f\nPIB: %f\nNúmero de pontos turísticos: %d\nDensidade Populacional: %f\nPib Per Capita: %f\nSuper poder: %f\n\n\n", carta1.nomeDaCidade, carta1.populacao, carta1.areaEmKm,carta1.pib,carta1.numeroPontosTuristicos, carta1.densidadePopulacional, carta1.pibPerCapita, carta1.superPoder);

    printf("====================\n%s\n====================\nPopulação: %d\nÁrea em Km²: %f\nPIB: %f\nNúmero de pontos turísticos: %d\nDensidade Populacional: %f\nPib Per Capita: %f\nSuper poder: %f\n\n\n", carta2.nomeDaCidade, carta2.populacao, carta2.areaEmKm,carta2.pib,carta2.numeroPontosTuristicos, carta2.densidadePopulacional, carta2.pibPerCapita, carta2.superPoder);
    

    //Comparação das cartas

    int pontosCarta1 = 0;
    int pontosCarta2 = 0;

    printf("====================\n%s vs %s\n====================\n\n", carta1.nomeDaCidade, carta2.nomeDaCidade);

    printf("População de %s: %d\nPopulação de %s: %d\n", carta1.nomeDaCidade, carta1.populacao,carta2.nomeDaCidade, carta2.populacao);

    if (carta1.populacao > carta2.populacao){
        pontosCarta1++;
        printf("%s tem maior população, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    } else {
        pontosCarta2++;
        printf("%s tem maior população, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    };

    printf("PIB de %s: %f\nPIB de %s: %f\n", carta1.nomeDaCidade, carta1.pib,carta2.nomeDaCidade, carta2.pib);

    if (carta1.pib > carta2.pib){
        pontosCarta1++;
        printf("%s tem maior PIB, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    } else {
        pontosCarta2++;
        printf("%s tem maior PIB, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    };

    printf("Área em Km² de %s: %f\nÁrea em Km² de %s: %f\n", carta1.nomeDaCidade, carta1.areaEmKm,carta2.nomeDaCidade, carta2.areaEmKm);

    if (carta1.areaEmKm > carta2.areaEmKm){
        pontosCarta1++;
        printf("%s tem maior extensão territorial, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    } else {
        pontosCarta2++;
        printf("%s tem maior extensão territorial, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    };

    printf("Número de pontos turísticos de %s: %d\nNúmero de pontos turísticos de %s: %d\n", carta1.nomeDaCidade, carta1.numeroPontosTuristicos,carta2.nomeDaCidade, carta2.numeroPontosTuristicos);

    if (carta1.numeroPontosTuristicos > carta2.numeroPontosTuristicos){
        pontosCarta1++;
        printf("%s tem mais pontos turísticos, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    } else {
        pontosCarta2++;
        printf("%s tem mais pontos turísticos, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    };


    printf("Densidade populacional de %s: %f\nDensidade populacional de %s: %f\n", carta1.nomeDaCidade, carta1.densidadePopulacional,carta2.nomeDaCidade, carta2.densidadePopulacional);

    if (carta1.densidadePopulacional < carta2.densidadePopulacional){
        pontosCarta1++;
        printf("%s tem menor densidade populacional, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    } else {
        pontosCarta2++;
        printf("%s tem menor densidade populacional, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    };


    printf("Pib per capita de %s: %f\nPib per capita de %s: %f\n", carta1.nomeDaCidade, carta1.pibPerCapita,carta2.nomeDaCidade, carta2.pibPerCapita);

    if (carta1.pibPerCapita > carta2.pibPerCapita){
        pontosCarta1++;
        printf("%s tem maior pib per capita, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    } else {
        pontosCarta2++;
        printf("%s tem maior pib per capita, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    };


    printf("Super poder de %s: %f\nSuper poder de %s: %f\n", carta1.nomeDaCidade, carta1.superPoder,carta2.nomeDaCidade, carta2.superPoder);

    if (carta1.superPoder > carta2.superPoder){
        pontosCarta1++;
        printf("%s tem maior Super poder, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    } else {
        pontosCarta2++;
        printf("%s tem maior Super poder, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    };


    if (pontosCarta1 > pontosCarta2){
        printf("====================\n%s %d x %d %s\n====================\n\n%s VENCEU!!!\n", carta1.nomeDaCidade, pontosCarta1, pontosCarta2, carta2.nomeDaCidade, carta1.nomeDaCidade);
    } else {
        printf("====================\n%s %d x %d %s\n====================\n%s VENCEU!!!\n", carta1.nomeDaCidade, pontosCarta1, pontosCarta2, carta2.nomeDaCidade, carta2.nomeDaCidade);
    };
    

    return 0;
}
