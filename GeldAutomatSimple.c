#include <stdio.h>

int main(void) {
	
	int hunderter, fuenfziger, zwanziger, zehner;
	int betrag;
	
	printf("WILLKOMMEN BEI DER BAMK IHRES VERTRAUENS\n");
	printf("***********************************************\n");
	printf("Wie viel moechten Sie abheben? ");
	scanf("%d", &betrag);
	
	printf("Eingegebener Geldbetrag: %d Fr.\n", betrag);
	
	hunderter = betrag / 100;
	printf("100er: %d\n", hunderter);
	betrag = betrag % 100;
	
	fuenfziger = betrag / 50;
	printf("50er: %d\n", fuenfziger);
	betrag = betrag % 50;
	
	zwanziger = betrag / 20;
	printf("20er: %d\n", zwanziger);
	betrag = betrag % 20;
	
	zehner = betrag / 10;
	printf("10er: %d\n", zehner);
	betrag = betrag % 10;
	
	printf("Rest: %d\n", betrag);
	
	return 0;
	
}