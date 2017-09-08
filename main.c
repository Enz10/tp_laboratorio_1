#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float num1;
    float num2;
    float rta;
    long long rtaFact;
    float validCero;
    char entries[9][75] = { "x", "y", "A+B", "A-B", "A/B", "A*B", "A!"};


    do
    {
        printf("1- Ingrese el primer numero (A=%s) \n", entries[0]);
        printf("2- Ingresar 2do operando (B=%s)\n", entries[1]);
        printf("3- Calcular la suma (%s)\n", entries[2]);
        printf("4- Calcular la resta (%s)\n", entries[3]);
        printf("5- Calcular la division (%s)\n", entries[4]);
        printf("6- Calcular la multiplicacion (%s)\n", entries[5]);
        printf("7- Calcular el factorial (%s)\n", entries[6]);
        printf("8- Calcular todas las operaciones (%s)\n", entries[7]);
        printf("9- Salir\n\n");

        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                num1=ingresoNumero();
                sprintf(entries[opcion - 1], "%.3f", num1);
                break;
            case 2:
                num2=ingresoNumero();
                sprintf(entries[opcion - 1], "%.3f", num2);
                break;
            case 3:
                rta=suma( num1 , num2);
                sprintf(entries[opcion - 1], "%.3f+%.3f=%.3f", num1, num2,rta);
                break;
            case 4:
                rta=resta(num1 , num2);
                sprintf(entries[opcion - 1], "%.3f-%.3f=%.3f",num1, num2,rta);
                break;
            case 5:
                validCero= divisionCero(num2);
                if(validCero!=0)
                {
                rta=division(num1 , num2);
                sprintf(entries[opcion - 1], "%.3f/%.3f=%.3f",num1, num2,rta);
                }
                else
                {
                    printf("Ingrese un divisor(B) distinto a cero");
                    system("pause");
                }
                break;
            case 6:
                rta=multiplicacion(num1, num2);
                sprintf(entries[opcion - 1], "%.3f*%.3f=%.3f",num1, num2,rta);
                break;
            case 7:
                rtaFact=factorial(num1);
                if(rtaFact != 0 )
                {
                sprintf(entries[opcion - 1], "%.3f=%lli",num1 , rtaFact);
                }
                else
                {
                printf("Ingrese unicamente numeros positivos y enteros. \n");
                system("pause");
                }
                break;
            case 8:
                rta=suma( num1 , num2);
                sprintf(entries[2], "%.3f+%.3f=%.3f", num1, num2,rta);

                rta=resta(num1 , num2);
                sprintf(entries[3], "%.3f-%.3f=%.3f",num1, num2,rta);

                rta=division(num1 , num2);
                sprintf(entries[4], "%.3f/%.3f=%.3f",num1, num2,rta);

                rta=multiplicacion(num1, num2);
                sprintf(entries[5], "%.3f*%.3f=%.3f",num1, num2,rta);

                rtaFact=factorial(num1);
                sprintf(entries[6], "%.3f=%d",num1 , rtaFact);
                break;
            case 9:
                seguir = 'n';
                break;
        }
        system("cls");
        }while(seguir=='s');
    return 0;
}
