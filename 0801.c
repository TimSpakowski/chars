#include <stdio.h>

int main() {
  char productNames[3][20] = {"Äpfel", "Brot", "Nudeln"};
  int sizes[3] = {500, 1000, 250};
  float prices[3] = {1.5, 2.0, 1.0};
  int i;

  for (i = 0; i < 3; i++) {
    printf("Produktname: %s\n", productNames[i]);
    printf("Packungsgröße: %d g\n", sizes[i]);
    printf("Kilopreis netto: %.2f €\n", (prices[i] / sizes[i]) * 1000);
    printf("Kilopreis brutto: %.2f €\n\n", ((prices[i] / sizes[i]) * 1000) * 1.07);
  }

  return 0;
}
