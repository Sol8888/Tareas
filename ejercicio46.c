#include <stdio.h>

int factorial(int num) {
   int i, resultado = 1;

   for (i = 1; i <= num; i++) {
      resultado *= i;
   }

   return resultado;
}

int main() {
   int n, i, suma_factoriales = 0, promedio;

   printf("Ingrese un número entero: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++) {
      suma_factoriales += factorial(i);
   }

   promedio = suma_factoriales / n;

   printf("El promedio entero de los factoriales desde 1 hasta %d es %d\n", n, promedio);

   return 0;
}
