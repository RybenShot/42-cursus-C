#include <stdio.h>

int counterTotal(int min, int max, int num){
  return (min + max + num);
}

int main() {
  char *letter = "hol-a c!Ar=aKol4a";
  int counterMin = 0;
  int counterMay = 0;
  int counterNum = 0;
  
  while(*letter)
  {
    if(*letter >= 'a' && *letter <= 'z')
      counterMin++;
    else if(*letter >= 'A' && *letter <= 'Z')
      counterMay++;
    else if(*letter >= '0' && *letter <= '9')
      counterNum++;
    letter++;
  }
  
  printf("La letra tiene en total : %d \n", counterTotal(counterMin, counterMay, counterNum));
  printf("La letra tiene %d letras minusculas \n", counterMin);
  printf("La letra tiene %d letras Mayusculas \n", counterMay);
  printf("La letra tiene %d letras numericos \n", counterNum);
  
  return 0;
}