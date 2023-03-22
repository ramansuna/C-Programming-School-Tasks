pointers
#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) 
{

        int temp1, temp2;
        temp1 = *a + b; 
        temp2= abs(a - *b);
        // fuktion abs() aus stdlib.h: absolute Differenz (ohne Vorzeichen)
        *a = temp1;
        *b = temp2;
}

int main(void) 
{

    int a, b;

    int *pa = &a, *pb = &b;
    printf("Geben Sie zwei Zahlen ein: ");
    scanf("%d %d", &a, &b);
    int out1 = a, out2 = b;
    update(pa, pb);
    printf("%d + %d = %d \n|%d-%d| = %d", out1, out2, a, out1, out2, b);

    return 0;
}

