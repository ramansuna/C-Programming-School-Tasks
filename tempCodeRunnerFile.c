#include <stdio.h>
int main()
{	
	int antwort;
	printf("Hallo, ich haet gern en Kafi bitte\n");
	printf("Expresso (1), Latte (2) oder Capuccino (3)?\n");
	scanf("%d", &antwort);
	switch(antwort) {
			case 1: printf("Expresso\n");
			break;
			case 2: printf("Latte\n");
			break;
			case 3: printf("Capuccino\n");