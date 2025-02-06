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
    struct CartasSuperTrunfo carta3;
    struct CartasSuperTrunfo carta4;
    int contador;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    for(contador = 1; contador <= 4; contador++) {
        //Criando um carta local
        struct CartasSuperTrunfo cartaLocal;
        char nomeDaCidadeLocal[255];

        //Pedindo os dados ao usuário
        printf("Insira o nome da cidade %d: ", contador);
        scanf("%s", &nomeDaCidadeLocal);
        strcpy(cartaLocal.nomeDaCidade, nomeDaCidadeLocal );

        printf("Insira a população da cidade %d: ", contador);
        scanf("%d", &cartaLocal.populacao);

        printf("Insira a Área em Km² da cidade %d: ", contador);
        scanf("%f", &cartaLocal.areaEmKm);

        printf("Insira o pib da cidade %d: ", contador);
        scanf("%f", &cartaLocal.pib);

        printf("Insira o número de pontos turísticos da cidade %d: \n", contador);
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

            case 3:
                carta3 = cartaLocal;;
            break;

            case 4:
                carta4 = cartaLocal;
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

    printf("====================\n%s\n====================\nPopulação: %d\nÁrea em Km²: %f\nPIB: %f\nNúmero de pontos turísticos: %d\nDensidade Populacional: %f\nPib Per Capita: %f\nSuper poder: %f\n\n\n", carta3.nomeDaCidade, carta3.populacao, carta3.areaEmKm,carta3.pib,carta3.numeroPontosTuristicos, carta3.densidadePopulacional, carta3.pibPerCapita, carta3.superPoder);
    
    printf("====================\n%s\n====================\nPopulação: %d\nÁrea em Km²: %f\nPIB: %f\nNúmero de pontos turísticos: %d\nDensidade Populacional: %f\nPib Per Capita: %f\nSuper poder: %f\n\n\n", carta4.nomeDaCidade, carta4.populacao, carta4.areaEmKm,carta4.pib,carta4.numeroPontosTuristicos, carta4.densidadePopulacional, carta4.pibPerCapita, carta4.superPoder);
    

    //Comparação das cartas
    struct CartasSuperTrunfo cartaComparacao1;
    struct CartasSuperTrunfo cartaComparacao2;
    char nomeDasCidades[4][255] = {carta1.nomeDaCidade, carta2.nomeDaCidade, carta3.nomeDaCidade, carta4.nomeDaCidade};
    int indexArr;

    printf("===================\nComparador de Cartas\n===================");
    for (indexArr = 0; indexArr <= 4; indexArr++) {
        printf("[%d] %s\n", indexArr, nomeDasCidades[indexArr]);
    }
    printf("Escolha a primeira carta que você quer comparar: ");

    return 0;
}
