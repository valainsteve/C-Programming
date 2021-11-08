#include <stdio.h>

int main()
{
    int a;
    for (a =10; a<20; a =a+1)
    {
        if(a==12 || a==13)
        {
          continue;
        }

        printf("Wert von a ist %i \n", a);
    }

    printf("Nach der Schleife ist a %i \n",a);
    return 0;
}
