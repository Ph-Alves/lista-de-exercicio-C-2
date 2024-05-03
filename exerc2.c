#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){

  char letra;
  char *l;
  char **ll;
  char ***lll;
  char ****llll;

  l = &letra;
  ll = &l;
  lll = &ll;
  llll = &lll;

  printf("Digite uma letra: ");
  scanf("%c", &letra);

  printf("%c", ****llll);

}