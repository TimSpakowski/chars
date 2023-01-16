#include <stdio.h>

int main() {
  char vornamen[5][10] = {"Max", "Test", "Olaf", "Günter", "David"};
  char nachnamen[5][10] = {"Muster", "Name", "Blatt", "Haus", "Braun"};
  int i;

  for (i = 0; i < 5; i++) {
    printf("%-10s %10s\n", vornamen[i], nachnamen[i]);
  }

  return 0;
}
