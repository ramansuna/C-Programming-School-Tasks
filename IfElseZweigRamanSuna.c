#include <stdio.h>
#include <math.h>

int main (void) 
{
    int antwort, antowrt_sld, antwort_groesse, vmo, kontinent, sudamer; 
    printf ("Kun: Hallo, ich haet gern en Kafi bitte\n"); 
    printf ("Ver: Expresso (1), Latte (2) oder Capuccino (3)?\n"); 
    scanf ("%d", &antwort); 
    printf ("Ver: Ihre Wahl ist: "); 
                                                                                    //Ver = Verkäufer, Kun = Kunde
    if (antwort == 1) 
    {
        printf ("Expresso\n" ); 
    }
    else if (antwort == 2) 
    {
        printf ("Latte\n" );
        //hier geht es mit dem Dialog weiter: 
    
        printf ("\nVer: Single(1), Latte(2) oder Double Latte(3)?\n");           
        scanf ("%d", &antowrt_sld);

        if (antowrt_sld == 1)
        {
            printf ("Kun: Single.\n");
        }
    
        else if (antowrt_sld == 2)
        {
            printf ("Kun: Latte.\n");
            
            printf ("Ver: Short(1), Tall(2) oder Grande(3)?\n");                  
            scanf ("%d", &antwort_groesse);

            if (antwort_groesse == 1)
            {
                printf ("Kun: Short.\n");
            }

            else if (antwort_groesse == 2)
            {
                printf ("Kun: Mittel (Tall).\n");
                
                printf ("Ver: Mit Vanilla(1), Mocca(2) oder ohne(3)?\n");           
                scanf ("%d", &vmo);

                if (vmo == 1)
                {
                    printf ("Kun: Vanilla.\n");
                }

                else if (vmo == 2)
                {
                    printf ("Kun: Mocca\n");
                }

                else if (vmo == 3)
                {
                    printf ("Kun: Ohne.\n");

                    printf ("Ver: Mit Bohnen aus Lateinamerika(1) oder Afrika(2)?\n");        
                    scanf ("%d", &kontinent);

                    if (kontinent == 1)
                    {
                        printf ("Kun: Lateinamerika.\n");                                    

                        printf ("Ver: Guatemala(1), Kolumbien(2) oder Costa Rica(3)?\n");
                        scanf ("%d", &sudamer);

                        if (sudamer == 1)
                        {
                            printf ("Kun: Guatemala.\n");
                        }
                        
                        else if (sudamer == 2)
                        {
                            printf ("Kun: Kolumbien.\n");
                        }

                        else if (sudamer == 3)
                        {
                            printf ("Kun: Costa Rica.\n");
                            
                            printf ("Ver: Westliches Hochland oder zentrales Hochland?\n");
                            printf ("Kun: Ich haet lieber es Mineral.\n");
                            printf ("Ver: Mit oder ohne Kohlensaeure?\n\n");

                        }
                        
                        else
                        {
                            printf ("Undefiniert.\n");
                        }                        

                    }

                    else if (kontinent == 2)
                    {
                        printf ("Afrika.\n");
                    }

                    else
                    {
                        printf ("Undefiniert.\n");
                    }
                }

                else
                {
                    printf ("Undefiniert.\n");
                }

            }

            else if (antwort_groesse == 3)
            {
                printf ("Kun: Grande.\n");
            }

            else
            {
                printf ("Undefiniert.\n");
            }
        }

        else if (antowrt_sld == 3)
        {
            printf ("Kun: Double.\n");
        }

        else 
        {
            printf ("\nUndefiniert.\n");
        }

        }
    else if (antwort == 3) 
    {
        printf ("Capuccino\n" ); 
    }

    else 
    {
        printf ("undefiniert!\n" );
    }

    system ("PAUSE");


    return 0;
}