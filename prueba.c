#include <stdio.h>
#include <conio.h>

int main (){
    
    int x;
    int i = 0;

    while (x != 0)
    {
        printf("numero: ");
        scanf ("%d", &x);

        if (x < 0)
        {
        i=i++;
        }
    }
    
    printf("los numeros negativos son: %d",i);
    getch();

    return 0;
}