/*
* Programm zur Demonstration des Konstrukts if-elseif
*/
#include <stdio.h>

int main()
{
    /* Die Variablen werden deklariert*/
    float zahl;

    /* die Eingabe einer Zahl wird gefordert */
    printf("Bitte geben Sie eine Zahl ein. \n");
    scanf("%f", &zahl);

    /*In Abhängigkeit des Werts der Zahl wird eine Meldung ausgegeben*/
    if( zahl < 0.)
    {
        printf("Die Zahl ist negativ.\n");
    }
    else if (zahl > 0)
    {
        printf("Die Zahl ist positiv.\n");
    }else
        printf("Die Zahl ist 0.");

    getchar();
    getchar();
}
