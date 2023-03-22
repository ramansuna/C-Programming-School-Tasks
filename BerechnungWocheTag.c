#include <stdio.h>

int main(void){

int x = 100;
int y = 7;
int resultat1;
int resultat2;

printf("\nBerechnung Woche und Tag\n");
printf("_____________________________\n\n");

resultat1 = x % y;
resultat2 = x / y;

printf("Der 100. Tag im Jahr liegt in der %d Woche und ist der %d Wochentag\n\n", resultat2 + 1, resultat1);

printf("Tag 1 = Montag\n");
printf("Tag 2 = Dienstag\n");
printf("Tag 3 = Mittwoch\n");
printf("Tag 4 = Donnerstag\n");
printf("Tag 5 = Freitag\n");
printf("Tag 6 = Samstag\n");
printf("Tag 7 = Sonntag\n");

return 0;
}

