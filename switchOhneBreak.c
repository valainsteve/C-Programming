#include <stdio.h>

int main()
{
    int eingabe =2 ;

    switch(eingabe)
    {
    case 1:
        printf("Sie haben 1 eingegeben\n");
    case 2:
        printf("Sie haben 2 eingegeben\n");
    case 3:
        printf("Sie haben 3 eingegeben\n");
    default:
        printf("Sie haben was anderes eingegeben\n");
    }

    getchar();
    getchar();
}
