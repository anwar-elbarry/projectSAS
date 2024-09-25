#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("donner un caracter:");
    scanf("%s",&c);
    switch (c){
    case 'a':
    case 'o':
    case 'e':
    case 'u':
    case 'i':
    case 'A':
    case 'O':
    case 'E':
    case 'U':
    case 'I':
    printf("ce caracter est un voyelle ");
    break;
    default :printf("ce caracter n'est pas un voyelle");
    break;
    }
    return 0;
}
