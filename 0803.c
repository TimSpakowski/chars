#include <stdio.h>
#include <string.h>

int main() {
  
    char* vorname[5];
    vorname[0] = "A";
    vorname[1] = "B";
    vorname[2] = "CD";
    vorname[3] = "E";
    vorname[4] = "FGH";

    char* nachname[5];
    nachname[0] = "Eins";
    nachname[1] = "Zwei";
    nachname[2] = "Drei";
    nachname[3] = "Vier";
    nachname[4] = "Fuenf";

  
  int i, j;

  for (i = 0; i < 5; i++) {
    printf("%s ", vorname[i]);
    for (j = 0; j < 70 - strlen(vorname[i]) - strlen(nachname[i]); j++) {
      printf("_");
    }
    printf(" %s\n", nachname[i]);
  }

  return 0;
}
