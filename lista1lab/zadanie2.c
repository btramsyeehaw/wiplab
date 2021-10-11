#include <stdio.h>
#include <math.h>
int main(){
 float a;
 float b;
 float c;
 double delta;
 double sqdelta;
 float r1;
 float r2;
 printf("Wpisz liczbę a: ");
 scanf("%f", &a);
 printf("Wpisz liczbę b: ");
 scanf("%f", &b);
 printf("Wpisz liczbę c: ");
 scanf("%f", &c);
 delta = b*b - 4*a*c;
 if (delta < 0)
  printf("Nie ma w zbiorze liczb rzeczywistych rozwiązania równania.\n");
 if (delta == 0)
  {
   r1 = (-b)/(2*a);
   printf("Rozwiązanie równania: %f", r1);
  }
 if (delta > 0)
  {
   sqdelta = sqrt(delta);
   r1 =  (sqdelta-b)/(2*a);
   r2 =  (-(sqdelta)-b)/(2*a);
   printf("Rozwiązania równania: \n");
   printf("%f\n", r1);
   printf("%f\n", r2);
  }
 return 0;
}
