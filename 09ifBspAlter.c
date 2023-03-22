/*
          _.-'~~~~~~`-._
        /      ||      \
       /       ||       \
      |        ||        |
      | _______||_______ |
      |/ ----- \/ ----- \|
     /  (     )  (     )  \
    / \  ----- () -----  / \
   /   \      /||\      /   \
  /     \    /||||\    /     \
 /       \  /||||||\  /       \
/_        \o========o/        _\
  `--...__|`-._  _.-'|__...--'
          |    `'    |

	09ifBspAlter
	Sj, 12.09.2020
	
*/

/*	Kurzbeschreibung
	Verdeutlichung einer Selektion mit if und einer Auswahlmöglichkeit
	Verwendung der Funktion scanf(), um User-Eingabe zu verwenden
	Abspeichern der Eingabe in der Variabale "alter" über das &-Zeichen
	%i Platzhalter/Umwandlungszeichen für ein Integer-Zahl 
*/

#include <stdio.h>

int main(void) {


	
	//Ergänzen und verstehen Sie hier den Code aus
	//dem Lösungsvorschlag zum AB Programmstrukturen von Seite 6
	
	unsigned int alter;
	
	printf("Geben sie den Alter ein");
	scanf("%d", &alter);
	/* ...noch jünger als 18? */
	if(alter < 18) {
		printf("Sie sind noch nicht volljaehrig\n"); 
		}
		printf("Bye\n");
		
	
	return 0;
}
