//polecenie03.c
//autor: Bartosz Tramś

#include <stdio.h>
int main() {
 float cel;
 float fah;
 printf("Wpisz temperature w celsjuszach:");
 scanf("%f", &cel);
 fah = 1.8 * cel + 32.0;
 printf("Ta temperatura w fahrenheitach to: %f\n", fah);
 return 0;
}
