int main (){

  char *frase = "Hola caracola, como estamos";
  char *fraseMala = "Esta web es una completa mierda";

  char PalabrasProhibidas[][20] = {"mierda", "capullo", "caca", "culo", "pedo", "pis"};

  // 1- iterar en la frase mirando cada palabra
  // 2- Cuando haya una coincidencia Censurar la palabra (modificando la frase original)
      // ? como vamos comprobando e itereando
      // ! vamos comprobando las letras con el inicio de cada palabra prohibida 
          // ! cuando haya una coincidencia nos quedamos con la posicion de la letra que ha coincidico (porque sospechamos de que va a ser una palabra prohibida)
              // ! iteramos junto con la palabra prohibida      - Si sigue habiendo coincidencia hasta el final, volvemos a la posicion inicial de la palabra en la frase original y vamos cambiando las vocales por i
              // !                                              - Si deja de haber coincidencia volvemos a la frase iterando desde el inicio de la palabra que estabamos comprobando
      // ? como hacemos si una palabra prohibida empieza por la misma vocal, por ejemplo: "imbecil" "inutil"
      // ? Como hacer si una palabra prohibida empieza por mayuscula en la frase
  // 3- sino hay coincidencias, iterar hasta el final
  return 0;
}
