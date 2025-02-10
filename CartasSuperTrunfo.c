#include <stdio.h>

int main() {
  char cityNome[40];
  int codigo;
  int population;
  float pib;
  int attractions;
  float squareKilometers;

  printf("Bem vindo ao CartasSuperTrunfo\n");
  printf("Digite o nome da Cidade:\n");
  scanf("%s", cityNome);
  printf("Digite a codigo da cidade:\n");
  scanf("%d", &codigo);
  printf("Digite a população da cidade:\n");
  scanf("%d", &population);
  printf("Digite 0 Pib da cidade: ");
  scanf("%f", &pib);
  printf("Digite a quantidade de pontos turísticos:\n");
  scanf("%d", &attractions);
  printf("Digite a área da cidade:");
  scanf("%f", &squareKilometers);


  printf("Super-Trunfo Card:\n Cidade: %s\n Codigo: %d\n população: %d\n Atrações: %d\n Pib: %f\n área da cidade: %f\n",
  cityNome, codigo, population, attractions, pib, squareKilometers );
    return 0;
}
