/* Entscheidungen treffen*/

#include <stdio.h>

int main()
{
    int x, y, z;
    printf("\n\tWELCHE ZAHL IST DIE GROESSTE?\n");
    printf("\nGeben Sie eine Zahl für x ein:\n");
    scanf("%i", &x);
    printf("\nGeben Sie eine Zahl für y ein:\n");
    scanf("%i", &y);
    printf("\nGeben Sie eine Zahl für z ein:\n");
    scanf("%i", &z);

    printf("\nDie groessere Zahl ist: %i\n",
           (x > y) ? ((z > x) ? z : x) : ((z > y) ? z : y));
}
