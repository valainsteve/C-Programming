#include <stdio.h>

int main()
{
    int eingabe;

    printf("Bitte geben Sie eine zahl ein.\n");
    scanf("%i", &eingabe);

    switch(eingabe)
    {
    case 1:
        printf("Sie haben 1 eingegeben\n");
        break;
    case 2:
        printf("Sie haben 2 eingegeben\n");
        break;
    case 3:
        printf("Sie haben 3 eingegeben\n");
        break;
    default:
        printf("Sie haben was anderes eingegeben\n");
    }

    getchar();
    getchar();
}
