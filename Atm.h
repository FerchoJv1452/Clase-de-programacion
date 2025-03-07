// Funciones
#include <stdio.h>
#ifndef ATM_H_INCLUDE
#define ATM_H_INCLUDE
void Saldo(float dinero[3], int opcion1)
{
    if (opcion1 >= 1 && opcion1 <= 3)
    {
        printf("Saldo de cuenta #%d: %.2f\n", opcion1, dinero[opcion1 - 1]);
    }
    else
    {
        printf("Opcion invalida.\n");
    
    }
}
int Depositar(float Deposito)
{
    if (Deposito > 0)
    {
        printf("Depositado Corrrectamente, Revise su saldo");
        return 1;
    }
    else
    {
        if (Deposito == 0)
        {
            printf("El Deposito es 0, Tu saldo es el mismo");
            return 1;
        }
        else
        {
            printf("Esa cantidad es Negativa, Porfavor No me haga perder tiempo");
            return 101;
        }
    }
    return 0;
}
int Retirar(float Retiro, float dinero)
{
    if (Retiro > 0 && Retiro <= dinero)
    {
        printf("Retiro Aceptado, Saliendo Billetes");
        return 1;
    }
    else
    {
        if (Retiro > dinero)
        {
            printf("El Retiro es mayor a tu saldo, Es imposible que yo te de ese dinero");
            return 101;
        }
        else
        {
            if (Retiro == 0)
            {
                printf("Entonces no vas a retirar nada? Anda, vete de aqui");
                return 1;
            }
            else
            {
                printf("Esa cantidad es Negativa, Porfavor No me haga perder tiempo");
                return 101;
            }
        }
    }
    return 0;
}
#endif