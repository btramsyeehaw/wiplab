//zadanie3.c
//autor: Bartosz Tramś

#include <stdio.h>
int main()
{
 int a;
 printf("wpisz liczbę całkowitą od 1 do 20: ");
 scanf("%d", &a);
 if (a<21 && a>0){
  for (int i=0; i<a; i++){
   for (int j=0; j<a; j++){
    printf("**");
    }
   printf("\n");
  }
 }
 else
  printf("wpisana liczba jest poza zakresem.\n");
 return 0;
}
