#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c,delta,x1,x2,x;
    
    printf("donner le nombre  A:");
    scanf("%lf",&a);
    printf("donner le nombre  B:");
    scanf("%lf",&b);
    printf("donner le nombre  C:");
    scanf("%lf",&c);
          
//calcule de delta
 delta=pow(b,2.0)-(4.0*a*c);
//le premier condition
   if(delta>0){
    x1=(-b+sqrt(delta))/(2.0*a);
    x2=(-b-sqrt(delta))/(2.0*a);
    printf("X1=%.2lf et X2=%.2lf",x1,x2);
   }
//deuxiem condition
   else if (delta==0){
    x=(-b)/(2*a);
    printf("X=%.2lf",x);
   }
//3rem condition
    else{
        printf("pas de solution dans R");
    }

    return 0;
}
