/* RamanSuna
*/


#include <stdio.h>
#include <stdlib.h>

int main() {

int wuerfelNote;  

printf("Noten Würfler\n"); 
printf("-----\n"); 
printf("Geben Sie die gewuerfelte Note ein:\n"); 
scanf("%i", &wuerfelNote); 

if(wuerfelNote = 1) { 
    printf("Schade!"); 
    } 
    else if (wuerfelNote = 2, 4) { 
        printf("Immerhin eine gerade Zahl"); 
        }
         else if (wuerfelNote = 3) { 
             printf("Wow, Deine Glückszahl"); 
             } 
             else if (wuerfelNote = 5) { 
                 printf("Deine Lieblingsnote"); 
                 } 
                 else if (wuerfelNote = 6) { 
                     printf("Super, Du darfst nochmal Wuerfeln"); 
                     } 
                     else if (wuerfelNote >= 7) { 
                         printf("Ungueltig, Hier wird nicht gemogelt!"); 
                         } 
return 0;
}