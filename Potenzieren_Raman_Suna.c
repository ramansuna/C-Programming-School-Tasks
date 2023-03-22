#include <stdio.h>
#include <math.h>

int main(void) { 
   
  //Variabelnblock
   int x; // x = Basis
   int y; // y = Exponent
   int l; // l = Lösung

  //Input und Output
   printf("Bitte geben Sie die Basis ein: ");
   scanf("%i", &x);

   printf("\nBitte Geben Sie den Exponent ein: ");
   scanf("%i", &y);

   printf("----------------------------------------\n\n");
   
   //Berechnung für Lösung
    l = pow(x, y);

    //Lösungsausgabe
    printf("%i hoch %i ist %i", x, y, l);
    printf("\n----------------------------------------");


    return 0;
}