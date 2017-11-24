

char CalcularNif(void) 
{
    int dni, indiceLetra;
    int calculo_dni;
    char letra_dni[24]={'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E','O'};

    printf("Escribe tu numero de DNI: \n");
    scanf("%d", &dni);

    printf("El dni escrito es \t %i \n", dni);

    calculo_dni = dni/23;
    printf("dividido por 23 es %i\n", calculo_dni);
    calculo_dni= calculo_dni*23;
    printf("multiplicado por 23 es %i\n", calculo_dni);
    calculo_dni=dni - calculo_dni;

    printf("El resultado es %i \n", calculo_dni);
    
    indiceLetra = calculo_dni;
    
    printf("Tu letra, dentro de funcion Calcular_dni es: %c \n\n",letra_dni[indiceLetra]);

    return letra_dni[indiceLetra];
}