#include "Operaciones.h"

double SumaDeOperandos (float op1, float op2, float resultado)
{
    resultado = op1 + op2;

    return resultado;
}

double RestaDeOperandos (float op1, float op2, float resultado)
{
    resultado = op1 - op2;

    return resultado;
}

double DivisionDeOperandos (float op1, float op2, float resultado)
{
    if (op2 == 0)
    {
        resultado = printf ("\nNo es posible la division por 0");
    }
    else
    {
        resultado = op1 / op2;

        return resultado;
    }
}
double MultiplicacionDeOperandos (float op1, float op2, float resultado)
{
    resultado = op1 * op2;

    return resultado;
}

double FactorialDeOperando (float op, float resultado)
{
    int i;
    resultado = 1;

    if (op < 1)
    {
        resultado;
    }
    else if (op > 0)
    {
        for (i = op; i > 0; i--)
        {
        resultado = resultado * i;
        }
    }
    return resultado;
}
