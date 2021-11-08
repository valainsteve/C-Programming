/*
* Programm zur Demonstration des Konstrukts if-else
*/


#include <stdio.h>
#include <math.h>

int main()
{
    /* Die Variablen werden deklariert*/
    float zaehler, nenner, quotient;
    /*eine (hier willkuerliche) Genauigkeit fuer Rundungen*/
    double epsilon = 1e-15;

    /* die Eingabe des Zählers wird gefordert */
    printf("Bitte geben Sie den Zaehler ein. \n");
    scanf("%f", &zaehler);

    /* die Eingabe des Nenners wird gefordert */
    printf("Bitte geben Sie den Nenner ein. \n");
    scanf("%f", &nenner);

    /*es wird geprüft ob der Zaehler gleich 0 ist.
    in dem Fall wird der Benutzer gearnt und die Rechnung nicht durchgeführt.*/
    if( fabs(nenner) < epsilon)
    {
        printf("Durch 0 teilen ist nicht erlaubt.");
    }
    else
    {
        quotient = zaehler/nenner;
        printf("Der Quotient ist %f \n", quotient);
    }

    getchar();
    getchar();
}
