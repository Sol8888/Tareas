#include <stdio.h>

int es_primo(int num) {
   int i;

   if (num < 2) {
      return 0;
   }

   for (i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
         return 0;
      }
   }

   return 1;
}

int cuenta_digitos_primos(int num) {
   int digitos_primos = 0;

   while (num > 0) {
      if (es_primo(num % 10)) {
         digitos_primos++;
      }
      num /= 10;
   }

   return digitos_primos;
}

int main() {
   int num1, num2, digitos_primos1, digitos_primos2;

   printf("Ingrese dos numeros enteros separados por un espacio: ");
   scanf("%d %d", &num1, &num2);

   digitos_primos1 = cuenta_digitos_primos(num1);
   digitos_primos2 = cuenta_digitos_primos(num2);

   if (digitos_primos1 > digitos_primos2) {
      printf("%d tiene mas dígitos primos que %d\n", num1, num2);
   } else if (digitos_primos2 > digitos_primos1) {
      printf("%d tiene mas dígitos primos que %d\n", num2, num1);
   } else {
      printf("Ambos numeros tienen la misma cantidad de digitos primos\n");
   }

   return 0;
}
