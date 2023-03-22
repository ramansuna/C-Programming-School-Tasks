#include<stdio.h>
 int main(){

 int Note[5];
 int i;                  /*Laufvariable*/
 int durchgefallen;
 int summe = 0;
 double durchschnitt;
printf("\tProgramm Notenspiegel\n");

 /*Eingabe der Noten*/
 for(i=0; i<=4; i++){
        printf("\nBitte geben sie die Anzahl der Arbeiten  mit der Note %i ein:", i+1);
        scanf("%i",&Note[i]);
        summe+=Note[i];}
        printf("\nDer Notenspiegel sieht dann so aus:");
        printf("\nNote\t1\t2\t3\t4\t5\tGesamt");
        printf("\nAnzahl\t%i\t%i\t%i\t%i\t%i\t%i", Note[0], Note[1], Note[2], Note[3], Note[4], s    umme);

         /*Ausgabe der Noten*/
       for(i=0;i<=4;  i++){
                
          durchgefallen=(Note[4]/summe)*100;
          durchschnitt=0;
          durchschnitt+Note[i]*(i+1);
        
                 printf("\nDurchschnittsnote: %.2f", durchschnitt);                
                 printf("\nDurchfallquote: %.2f Prozent", durchgefallen);}
        
return 0;
}