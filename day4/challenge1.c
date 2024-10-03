#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int taill;
    int tempt;
    printf("donner la taill du tableux:");
    scanf("%d",&taill);
    int t[taill];
    for(int i=0;i<taill;i++){
        printf("N%d:",i+1);
        scanf("%d",&t[i]);
    }
    for(int i=0;i<taill;i++){
        for(int j=i+1;j<taill;j++){
            if(t[i]>t[j]){
                tempt=t[i];
                t[i]=t[j];
                t[j]=tempt;
            }
        }
    }
      for(int i=0;i<taill;i++){
        printf("%d",t[i]);
        if(i<taill-1)
            printf(",");

    }
    return 0;
}
