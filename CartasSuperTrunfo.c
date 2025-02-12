#include <math.h>
#include <stdio.h>
float funPopulationdensity(int population, float squareKilometers) {
    return  population / squareKilometers;;
}
float funPibPerCapita(float population, float pib) {
    return pib / population;
}


int main() {
    char cityName[40];
    int codeCity;
    int population;
    float pib;
    int attractions;
    float squareKilometers;
    float populationDensity;
    float pibPerCapita;

    printf("Bem vindo ao CartasSuperTrunfo\n");
    printf("Digite o nome da Cidade:\n");
    scanf("%s", cityName);
    printf("Digite a codigo da cidade:\n");
    scanf("%d", &codeCity);
    printf("Digite a população da cidade:\n");
    scanf("%d", &population);
    printf("Digite 0 Pib da cidade: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &attractions);
    printf("Digite a área da cidade:");
    scanf("%f", &squareKilometers);

    pibPerCapita = funPibPerCapita(population, pib);
    populationDensity = funPopulationdensity(population, squareKilometers);


    printf("Super-Trunfo Card:\n Cidade: %s\n Codigo: %d\n população: %d\n Atrações: %d\n Pib: %f\n Área da cidade: %f\n Population density: %f\n Pib per Capita: %f\n",
    cityName, codeCity, population, attractions, pib, squareKilometers, populationDensity, pibPerCapita );

    return 0;

}
