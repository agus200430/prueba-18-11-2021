// escribir un programa que diga "Hola, x" donde x
// es un argumento (string)
// usar la funcion saludar de libprueba.h

#include <stdio.h>
#include <string.h>
#include "libprueba.h"

void saludar(char nombre[]) {
  char saludo[100]= "saludar, ";
  strcat(saludo, nombre);
  printf(saludo);
  printf("\n");
  return;
}

int main(void) {
  saludar("Pablo");
  return 0;
}
