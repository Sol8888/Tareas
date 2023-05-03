#include <stdio.h>
#include <string.h>

int main (){
    char contraseñai [10];
    char contraseña []="hola";
    
    gets(contraseñai);

    if (strcom(contraseñai == contraseña))
    {
        printf("contraseña correcta");
    }
    else{
        printf("contraseña incorrecta");
    }
    
    return 0;
}