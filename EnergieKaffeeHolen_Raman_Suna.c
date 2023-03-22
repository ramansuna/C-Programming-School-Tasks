#include <stdio.h>
#include <math.h>

int main(void){
	
	//Variabeln
    
	char name[60];
    int weg, zeit, gewicht, geschwindigkeit, zwischenresultat, energieverbrauch;
	
	//Willkommen
    printf("Berechnung des Energieverbrauch, um einen Kaffee zu holen\n");
	printf("---------------------------------------------------------------\n\n");

    //Abfrage
    printf("Geben Sie ihr Name ein:  ");
    scanf("%s", name);

    printf("\nGeben Sie ihr Gewicht ein in kg:  ");
    scanf("%i", &gewicht);

    printf("\nGeben Sie ihr Weg zur Kueche ein in m:  ");
    scanf("%i", &weg);

    printf("\nGeben Sie die Zeit an, die Sie gebraucht haben in s:  ");
    scanf("%i", &zeit);

    //Berechnung
    geschwindigkeit = weg / zeit;
    zwischenresultat = gewicht*geschwindigkeit*geschwindigkeit / 2;
    energieverbrauch = zwischenresultat / geschwindigkeit;

    printf("Mein Name: %s\n", name);
    printf("Mein Gewicht in kg: %i\n", &gewicht);
    printf("Der Weg zur Kueche in m: %i\n", &weg);
    printf("Meine Zeit dafuer in s: %i\n", &zeit);
    printf("Der Energieverbrauch in  Watt: %i\n", &energieverbrauch);

	
	return 0;
}