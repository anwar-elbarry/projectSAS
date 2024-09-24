#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
double surface,largeur,longueur;
printf("donner longueur du rectangle:");
scanf("%lf",&longueur);
printf("donner largeur du rectangle:");
scanf("%lf",&largeur);
surface=longueur*largeur;
printf("le surface du rectangle est :%.2lf",surface);
    return 0;
}
