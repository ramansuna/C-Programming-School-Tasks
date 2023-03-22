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

	11switchCaseBspZahl.c
	Sj, 12.09.2020
	
*/

/*	Kurzbeschreibung
	Verdeutlichung einer Selektion mit switch/case und beliebig vielen Auswahlmöglichkeiten
	Verwendung der Funktion scanf(), um User-Eingabe zu verwenden
	Abspeichern der Eingabe in der Variabale "alter" über das &-Zeichen
	%i Platzhalter/Umwandlungszeichen für ein Integer-Zahl
*/

#include <stdio.h>

int main(void) {
	
	//Ergänzen und verstehen Sie hier den Code aus
	//dem Lösungsvorschlag zum AB Programmstrukturen von Seite 6
	
	int a;
	
	
		printf("Bitte eine Zahl von 1-5 eingeben: ");
		scanf("%d", &a);
		
		switch(a) {
			case 1: printf("Das war eins\n");
			break;
			case 2: printf("Das war zwei\n");
			break;
			case 3: printf("Das war drei\n");
			break;
			case 4: printf("Das war vier\n");
			break;
			default: printf("NICHTS!\n");

			return 0;
		}






}
