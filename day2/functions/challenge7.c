#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int verify (int a){
   if ((a%2)==0)
    return 1;
   else
    return 0;
    }

int main()
{
    int a;
   printf("donner un nombre:");
   scanf("%d",&a);
   if(verify(a)==1)
    printf("%d est un nombre pair",a);
   else
    printf("%d est un nombre impair",a);
    return 0;
}
