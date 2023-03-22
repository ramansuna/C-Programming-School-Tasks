#include <stdlib.h>
#include <stdio.h>
int main() {

    int iZeahler;

    printf("Geben Sie einen Wert fuer den Zaehler: ");
    scanf("%d", &iZeahler);

    while (iZeahler != 0) {

        printf("\n\n\t%d", iZeahler);
        iZeahler--;
        _sleep(1);
        break;
    }

    printf("\n\n\tLift off\n");
    
    return 0;
}