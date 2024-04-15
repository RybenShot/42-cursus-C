#include <stdio.h>
#include <string.h>

int main (){
  int longitud;
  int cintura;
  int pecho;

  // Solicitar al usuario que ingrese las medidas
  printf("Por favor, ingrese las medidas en centímetros:\n");
  printf("Medida de longitud: ");
  scanf("%d", &longitud);
  printf("Cintura: ");
  scanf("%d", &cintura);
  printf("Pecho: ");
  scanf("%d", &pecho);

  // Determinar la talla basada en las medidas
  char talla[4]; // Lo definimos como cadena de caracteres para almacenar la talla (sobretodo para los XS, XL y XXL)
  if ((longitud >= 60 && longitud <= 65) && (cintura >= 71 && cintura <= 80) && (pecho >= 81 && pecho <= 90)) {
      strcpy(talla, "XS");
  } else if ((longitud >= 66 && longitud <= 70) && (cintura >= 81 && cintura <= 90) && (pecho >= 91 && pecho <= 100)) {
      strcpy(talla, "S");
  } else if ((longitud >= 71 && longitud <= 75) && (cintura >= 91 && cintura <= 100) && (pecho >= 101 && pecho <= 110)) {
      strcpy(talla, "M");
  } else if ((longitud >= 76 && longitud <= 80) && (cintura >= 101 && cintura <= 110) && (pecho >= 111 && pecho <= 120)) {
      strcpy(talla, "L");
  } else if ((longitud >= 81 && longitud <= 85) && (cintura >= 111 && cintura <= 120) && (pecho >= 121 && pecho <= 130)) {
      strcpy(talla, "XL");
  } else if ((longitud >= 86 && longitud <= 90) && (cintura >= 121 && cintura <= 130) && (pecho >= 131 && pecho <= 140)) {
      strcpy(talla, "XXL");
  } else {
      strcpy(talla, "N"); // N para "No se encontró talla adecuada"
  }

  // Mostrar la talla recomendada
  if (strcmp(talla, "N") != 0) {    // RECUERDA!! la funcion strcmp compara lo que tengamos en "talla" con "N" y si coinciden, retorna un 0
      printf("Su talla es %s\n", talla);
  } else {
      printf("Lo sentimos, no pudimos determinar su talla adecuada.\n");
  }

  return 0;
}