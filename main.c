/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

char CalcularNif(void); //prototipo funcion CalcularNif
int ValidarNumero(char *, int max);

int main(void) 
{
    int eleccion;
    char result_letra_dni;
    
    printf("Elige una opción:\n");
    printf("\t1.- Calcular letra NIF.\n");
    printf("\t0.- Finalizar.\n");
    
    scanf("%i",&eleccion);
    
    if (eleccion==1)
        {
        result_letra_dni=CalcularNif();
        system("read pause");
        system("clear"); //stdlib.h
        printf("Letra dni en MAIN es: %c \n\n",result_letra_dni);
        }
    else
    {
        printf("Has elegido finalizar");
    }
return 0;
} 

/*
#include <stdio.h>
int main()
{
char a, b, c;
printf( "Introduzca primer caracter: " );
scanf( "%c", &a );


printf( "\nIntroduzca segundo caracter: " );
fflush(stdin);
scanf( "%c", &b );

printf( "\nIntroduzca tercer caracter: " );
getchar();
scanf( "%c", &c );
printf( "Los valores son: %c, %c, %c ", a, b, c );
return 0;
}
 */