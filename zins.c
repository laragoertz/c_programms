#include <stdio.h>

void rechnen(double Zins, double AB, double AD)
{
    printf("das ist das unterprogramm");
    double c = 0.0;
    do
    {
        AB = AB * (1 + Zins);
    } while (c < AD, c++);
    printf("\nDer Anlagebetrag ist %lf\n", AB);
}

int main()
{
    double Zins;
    double AB;
    double AD;
    printf("\nGeben Sie den Zins ein\n");
    scanf("%lf", &Zins);
    printf("\nGeben Sie den Anlagebetrag ein\n");
    scanf("%lf", &AB);
    printf("\nGeben Sie die Anlagedauer ein\n");
    scanf("%lf", &AD);
    rechnen(Zins, AB, AD);
}
  
  
