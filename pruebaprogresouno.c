#include <stdio.h>
#include <conio.h>

int main (){
    
    int x;
    int i;

    while (x=!0)
    {
        printf("ingrese numero");
        scanf ("%d", &x);

        if (x<0)
        {
        i=i+1;
        }
    }
    printf("hay:&d numero negativos",i);

    return 0;
}