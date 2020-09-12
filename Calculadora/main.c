#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Operaciones.h"

int main()
{
    float primerOperando;
    float segundoOperando;
    double resultado;
    double factorialPrimerOperando;
    double factorialSegundoOperando;
    int opcion;
    int flagPrimerOperando;
    int flagSegundoOperando;

    flagPrimerOperando = 0;
    flagSegundoOperando = 0;

    do
    {
        printf("\nฐอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออฐ");
        printf("\nบ               :: C A L C U L A D O R A ::                 บ");
        printf("\nฐอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออฐ");
        printf("\n1) Ingresar primer operando");
        printf("\n2) Ingresar segundo operando");
        printf("\n3) Ejecutar todas las operaciones");
        printf("\n4) Mostrar los resultados");
        printf("\n5) Salir");
        printf("\n");
        printf("\nElija una opcion :");
        scanf("%d",&opcion);
        printf("\n");

        switch(opcion)
        {
        case 1: //--------------------- INGRESAR PRIMER OPERANDO ------------------------

        printf("\nIngrese primer operando (A): ");
        scanf ("%f", &primerOperando);
        printf ("\n");
        flagPrimerOperando = 1;

        break;

        case 2: //--------------------- INGRESAR SEGUNDO OPERANDO ------------------------

        printf("\nIngrese segundo operando (B): ");
        scanf ("%f", &segundoOperando);
        printf ("\n");
        flagSegundoOperando = 1;

        break;

        case 3: //--------------------- HACER CALCULOS ------------------------

        if (flagPrimerOperando == 0 && flagSegundoOperando == 0)
        {
            printf ("\nEs necesario que ingrese DOS numeros para ejecutar las operaciones");
        }
        else if (flagPrimerOperando == 1 && flagSegundoOperando == 1)
        {
            SumaDeOperandos (primerOperando, segundoOperando, resultado);
            RestaDeOperandos (primerOperando, segundoOperando, resultado);
            DivisionDeOperandos (primerOperando, segundoOperando, resultado);
            MultiplicacionDeOperandos (primerOperando, segundoOperando, resultado);
            factorialPrimerOperando = FactorialDeOperando (factorialPrimerOperando, resultado);
            factorialSegundoOperando = FactorialDeOperando (factorialSegundoOperando, resultado);
        }

        break;

        case 4: //--------------------- MOSTRAR RESULTADOS ------------------------

        if (flagPrimerOperando == 0 && flagSegundoOperando == 0)
        {
            printf ("\nPrimero hay que ejecutar las operaciones para poder ver los resultados");
        }
        else if (flagPrimerOperando == 1 && flagSegundoOperando == 1)
        {
            printf("\nEl resultado de la suma (A + B) es: %2.lf", SumaDeOperandos (primerOperando, segundoOperando, resultado));
            printf("\nEl resultado de la resta (A- B) es: %2.lf", RestaDeOperandos (primerOperando, segundoOperando, resultado));
            printf("\nEl cociente de la division (A / B) es: %2.lf", DivisionDeOperandos (primerOperando, segundoOperando, resultado));
            printf("\nEl producto de la multiplicacion (A * B) es: %2.lf", MultiplicacionDeOperandos (primerOperando, segundoOperando, resultado));
            printf("\nEl factorial del primer numero (!A) es: %2.lf\nY el factorial del segundo numero (!B) es: %2.lf", factorialPrimerOperando, factorialSegundoOperando);
        }

        break;

        case 5: //--------------------- SALIR ------------------------

        printf("\nฐอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออฐ");
        printf("\nบ                  H A S T A  L U E G O                     บ");
        printf("\nฐอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออฐ");

        break;

        default:

        printf ("\nEsa no es una opcion, intentelo de nuevo");

        break;
        }

    }while (opcion != 5);

    return 0;
}
