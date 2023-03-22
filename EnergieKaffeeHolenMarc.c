#include <stdio.h>



float Gewicht;
float Geschwindigkeit;
float Weg;
float Zwischenresultat;
float Energieverbrauch;
float Zeit;
char Name [50];


int main() {

printf("Berechnung des Energieverbrauchs, um einen Kaffe aus der Kueche zu holen\n");
printf("----------------------------------------------------------------------------\n");



printf("Geben Sie Ihren Namen ein\n");
scanf("%s", &Name);

printf("Geben Sie Ihr Gewicht ein\n");
scanf("%f", &Gewicht);

printf("Geben Sie Ihren Weg zur Keuche in m ein\n");
scanf("%f", &Weg);

printf("Geben Sie Ihre Zeit in S. an\n");
scanf("%f", &Zeit);



Geschwindigkeit = Weg/Zeit;
Zwischenresultat = (Gewicht * (Geschwindigkeit * Geschwindigkeit)) / 2;
Energieverbrauch = Zwischenresultat / Geschwindigkeit; 


printf("Mein Name: %s\n", &Name);
printf("Mein Gewicht in kg: %f\n", &Gewicht);
printf("Der Weg zur keuche in m: %f\n", &Weg);
printf("Meine Zeit dafuer in s: %f\n", &Zeit);
printf("Der Energieverbrauch in Watt: %f\n", &Energieverbrauch);




return 0;
}