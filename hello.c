#include <stdio.h>

int main() {
  //Program to say Hello World!
  char name[50];
  printf("What is your name? ");
  scanf("%[^\n]%*c", name);
  //(%[^\n]%*c) to accept all characters including spaces
  printf("Hello World %s!\n", name);
  return 0;
}
