//#include <string.h> 
// int strcmp (str1, str2);
#include <string.h>

int main(void)
{
    char eingabe[10];
    int versuche = 3;

    do
    {
        printf("\n\tPASSWORTEINGABE\n");
        gets(eingabe);
        if (strcmp(eingabe, "2402") == 0)
        {
            printf("\nOK\n");
        }
        else
        {
            printf("\nPasswort falsch, noch zwei Versuche!\n");
        }
        /*else 
        {
            printf("\nPasswort falsch, noch einen Versuch!\n");
        }
        else
        {
            printf("\nPasswort falsch, keine Versuche mehr!\n");
        }*/
        
        versuche--;

    } while (versuche > 0);
}
 
