#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    
    printf("La suma de los enteros entre 1 y %d es %d\n", num, sum);
    
    return 0;
}
