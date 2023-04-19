//programa que genera todas la tablas de multiplicar de 1 al 10 y las imprime //
#include <stdio.h>

int main() {
   int i, j;

   for (i = 1; i <= 10; i++) {
      printf("Tabla de multiplicar del %d:\n", i);
      for (j = 1; j <= 10; j++) {
         printf("%d x %d = %d\n", i, j, i * j);
      }
      printf("\n");
   }

   return 0;
}