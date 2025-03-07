#include <stdio.h>
#include <stdlib.h>
// Funciones
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
int main()
{
    int Password = 1234;
    int Usuario;
    int Num_intentos = 0;
    do
    {
        if (Num_intentos <= 3)
        {
            printf("\n\n\t\t\t----Bienvenido al Cajero Automatico---\n\n");
            printf("Para ingresar a tu cuenta, Porfavor Ingrese su clave de 4 digitos.\n\nClave: ");
            scanf("%d", &Usuario);
        }
        else
        {
            exit(1);
        }
        Num_intentos++;
    } while (Usuario != Password);
    printf("\n\n\n\t\t\t\tContrasena Correcta ");
    float saldo [3] = {1000, 2000, 3000};
    int Opcion, opcion1;
    float Cantidad;
    do
    {
        // Menu del Cajero Automatico
        printf("\n\n\t\t\t----Bienvenido al Cajero Automatico---\n\n");
        printf("1. Consulta tu saldo\n");
        printf("2. Depositar Dinero\n");
        printf("3. Retirar Dinero\n");
        printf("4. Salir\n");
        printf("\nSelecione una de las opciones: ");
        scanf("%d", &Opcion);

        switch (Opcion)
        {
        case 1:
            printf("\n\n\t\t\t----Cual cuenta quieres usar?---\n\n");
            printf("1. Cuenta #1\n");
            printf("2. Cuenta #2 \n");
            printf("3. Cuenta #3\n");
            printf("\nSelecione una de las opciones: ");
            scanf("%d", &opcion1);
            Saldo(saldo, opcion1);
            break;
        case 2:
            printf("\n\n\t\t\t----Cual cuenta quieres usar?---\n\n");
            printf("1. Cuenta #1\n");
            printf("2. Cuenta #2 \n");
            printf("3. Cuenta #3\n");
            printf("\nSelecione una de las opciones: ");
            scanf("%d", &opcion1);
            Saldo(saldo, opcion1);
            printf("\n\n\t\t\tCuanto dinero quieres depositar?\nDeposito: ");
            scanf("%f", &Cantidad);
            if (Depositar(Cantidad) == 1)
            {
                saldo[opcion1 - 1] += Cantidad;
            }
            break;
        case 3:
            printf("\n\n\t\t\t----Cual cuenta quieres usar?---\n\n");
            printf("1. Cuenta #1\n");
            printf("2. Cuenta #2 \n");
            printf("3. Cuenta #3\n");
            printf("\nSelecione una de las opciones: ");
            scanf("%d", &opcion1);
            Saldo(saldo, opcion1);
            printf("\n\n\t\t\tCuanto dinero quieres retirar?\nRetiro: ");
            scanf("%f", &Cantidad);
            if (Retirar(Cantidad, saldo[opcion1 - 1]) == 1)
            {
                saldo[opcion1 - 1] -= Cantidad;
            }
            break;
        case 4:
            break;
        default:
            printf("\n\n\t\t\tEsa opcion no esta disponible, no me haga perder mi tiempo");
        }
    } while (Opcion != 4);

    return 0;
}
