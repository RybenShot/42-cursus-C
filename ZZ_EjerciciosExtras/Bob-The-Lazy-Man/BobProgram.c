#include <stdio.h>

int main() {
  char *letter = "hol-a c!Ar=aKol4a";
  int counter = 0;
  int counterMin = 0;
  int counterMay = 0;
  int counterNum = 0;
  
  while(*letter)
  {
    if(*letter >= 'a' && *letter <= 'z'){
      counter++;
      counterMin++;
      letter++;
    }
    else if(*letter >= 'A' && *letter <= 'Z'){
      counter++;
      counterMay++;
      letter++;
    }
    else if(*letter >= '0' && *letter <= '9'){
      counter++;
      counterNum++;
      letter++;
    }
    else{
      letter++;
    }
  }
  
  printf("La letra tiene en total : %d \n", counter);
  printf("La letra tiene %d letras minusculas \n", counterMin);
  printf("La letra tiene %d letras Mayusculas \n", counterMay);
  printf("La letra tiene %d letras numericos \n", counterNum);
  return 0;
}