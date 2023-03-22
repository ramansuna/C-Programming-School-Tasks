#include <stdio.h>

int main()
{
float fahrenheit;
float celsius;
float untergrenze;
float obergrenze;

printf("Bitte geben Sie die Untergrenze ein: ");
scanf("%f", &untergrenze);
printf("Bitte geben Sie die Obergrenze ein: ");
scanf("%f", &obergrenze);
printf("------------------------------------------\n");

celsius = untergrenze;

while (celsius<=obergrenze & celsius>=untergrenze) {
    fahrenheit = celsius*(9/5) + 32;
    printf("%f\tCelsius = %f Fahrenheit\n", celsius, fahrenheit); 
    celsius = celsius+5;
    }
return 0;
}