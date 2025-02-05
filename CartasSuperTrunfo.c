#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

struct CartasSuperTrunfo
{
    // char estado;
    char cardcode[255];
    char nomeDaCidade[255];
    unsigned long int populacao;
    float areaEmKm;
    int numeroPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    // float superPoder;

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

    for(contador = 1; contador <= 4; contador++) {
        //Criando um carta local
        struct CartasSuperTrunfo cartaLocal;
        char nomeDaCidadeLocal[255];


        printf("Insira o nome da cidade: ");
        scanf("%s", &nomeDaCidadeLocal);
        strcpy(cartaLocal.nomeDaCidade, nomeDaCidadeLocal );

        printf("Insira a população: ");
        scanf("%d", &cartaLocal.populacao);

        printf("Insira a Área em Km²: ");
        scanf("%f", &cartaLocal.areaEmKm);

        printf("Insira o número de pontos turísticos: ");
        scanf("%d", &cartaLocal.numeroPontosTuristicos);

        printf("Insira a densidade populacional: ");
        scanf("%f", &cartaLocal.densidadePopulacional);

        printf("Insira o Pib per Capita: ");
        scanf("%f", &cartaLocal.pibPerCapita);

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

        // cartaLocal.superPoder = cartaLocal.pibPerCapita + cartaLocal.densidadePopulacional + cartaLocal.numeroPontosTuristicos + cartaLocal.areaEmKm + cartaLocal.populacao;
    };

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
