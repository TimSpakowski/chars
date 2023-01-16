#include<stdio.h>
#include<string.h>

int main() {

char* wochentage[7];
wochentage[0] = "Montag";
wochentage[1] = "Dienstag";
wochentage[2] = "Mittwoch";
wochentage[3] = "Donnerstag";
wochentage[4] = "Freitag";
wochentage[5] = "Samstag";
wochentage[6] = "Sonntag";

int i;

printf("Geben sie eine Zahl ein: \n");
scanf("%d", &i);

printf("Wochentag: %s\n", wochentage[i-1]);

}
