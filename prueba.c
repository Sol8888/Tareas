//Construya un programa que lea de forma continua números introducidos por el usuario y vaya contando los números negativos. El programa se debe detener cuando el usuario ingrese el número cero.//


#include <stdio.h>
#include <conio.h>

int main (){
    
    int x;          //se define una variable para ingresar un numero y otra para hacer la funcion de contador//
    int i = 0;      //contador inicia en cero//

    while (x != 0)
    {
        printf("numero: ");
        scanf ("%d", &x);

        if (x < 0)
        {
        i=i + 1;
        }
    }
    
    printf("los numeros negativos son: %d",i);
    getch();

    return 0;
}