#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inverse (char* chain){
    int first=0;
    int last=strlen(chain)-1;
    int temp;
    while(first<last){
        temp=chain[first];
        chain[first]=chain[last];
        chain[last]=temp;
        first++;
        last--;
    }
   printf("%s",chain);
}

int main()
{
    char chain[12];
   printf("donner une chain:");
   fgets(chain,12,stdin);
   chain[strcspn(chain, "\n")] = 0;
   inverse(chain);
    return 0;
}