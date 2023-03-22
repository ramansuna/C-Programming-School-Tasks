#include <stdio.h>
#include <math.h>

void max_of_four (int zahl1, int zahl2, int zahl3, int zahl4);
int main()
{
    int zahl1 , zahl2, zahl3, zahl4;
    scanf("%d %d %d %d", &zahl1, &zahl2, &zahl3, &zahl4);
    printf("______________\nDie groesste der ausgewaehlten Zahlen ist: ");
    max_of_four(zahl1,zahl2,zahl3,zahl4);
    return(0);
}
void max_of_four(int zahl1, int zahl2, int zahl3, int zahl4)
{

  if((zahl1>zahl2)&&(zahl1>zahl3)&&(zahl1>zahl4))
  {
    printf("%d", zahl1);
  }
  else
    {
        if ((zahl2>zahl3)&&(zahl2>zahl4))
        {
            printf("%d",zahl2);
        }
        else
        {
            if (zahl3>zahl4)
            {
                printf("%d",zahl3);
            }
            else
            {
                printf("%d",zahl4);

            }
        }
    }
}

 