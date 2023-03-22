#include <stdio.h>
#include <math.h>

int main()
{	
	int antwort;
	printf("Hallo, ich haet gern en Kafi bitte\n");
	printf("Expresso (1), Latte (2) oder Capuccino (3)?\n");
	scanf("%d", &antwort);
	switch(antwort) {
			case 1: printf("Ihre Antwort ist: Expresso\n");
			break;
			case 2: printf("Ihre Antwort ist: Latte\n");
			break;
			case 3: printf("Ihre Antwort ist: Capuccino\n");
			break;
            default: printf("Undefiniert!");
    }

    int antwort1;
	printf("Single Latte (1) oder Double Latte (2)?\n");
    scanf("%d", &antwort1);
    switch(antwort1) {
			case 1: printf("Ihre Antwort ist: Single Latte\n");
			break;
			case 2: printf("Ihre Antwort ist: Double Latte\n");
			break;
            default: printf("Undefiniert!");
    }

    int antwort2;
    printf("Short (1), Tall (2) oder Grande (3)?\n");
    scanf("%d", &antwort2);
    switch(antwort2) {
			case 1: printf("Ihre Antwort ist: Short\n");
			break;
			case 2: printf("Ihre Antwort ist: Tall\n");
			break;
			case 3: printf("Ihre Antwort ist: Grande\n");
			break;
            default: printf("Undefiniert!");    
    }    
           
                
                    
    int antwort3;
    printf("Mit Vanilla (1), Mocca (2) oder Ohne (3)?\n");
    scanf("%d", &antwort3);
    switch(antwort3) {
			case 1: printf("Ihre Antwort ist: Vanilla\n");
			break;
			case 2: printf("Ihre Antwort ist: Mocca\n");
			break;
			case 3: printf("Ihre Antwort ist: Ohne\n");
			break;
            default: printf("Undefiniert!");    
    }    

    int antwort4;
    printf("mit Bohnen aus Lateinamerika (1), Ohne (2)?\n");
    scanf("%d", &antwort4);
    switch(antwort4) {
			case 1: printf("Ihre Antwort ist: Mit Bohnen aus Lateinamerika!\n");
			break;
			case 2: printf("Ihre Antwort ist: Ohne\n");
			break;
            default: printf("Undefiniert!");
    }

    int antwort5;
    printf("Mit Kohlensäure (1), Ohne (2)?\n");
    scanf("%d", &antwort5);
    switch(antwort5) {
			case 1: printf("Ihre Antwort ist: Mit Kohlensäure!\n");
			break;
			case 2: printf("Ihre Antwort ist: Ohne\n");
			break;
            default: printf("Undefiniert!");
    }                        

	return 0;
}