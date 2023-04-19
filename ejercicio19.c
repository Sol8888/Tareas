//programa que  lee un numero entero y determine si es primo o no// 
#include <stdio.h>

int main() {
   int num, i, primo = 1;

   printf("Ingrese un numero entero: ");
   scanf("%d", &num);

   for (i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
         primo = 0;
         break;
      }
   }

   if (primo == 1) {
      printf("%d es un numero primo\n", num);
   } else {
      printf("%d no es un numero primo\n", num);
   }

   return 0;
}
