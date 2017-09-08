#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float ingresoNumero()
{
    float num;
    printf("Ingrese un numero: ");
    scanf("%f",&num);
    return num;
}

 float suma( float num1, float num2)
{
    float resp;
    resp=num1+num2;
    return resp;
}


float resta(float num1, float num2)
{
    float resp;
    resp=num1-num2;
    return resp;
}


float division( float num1, float num2)
{
    float resp;
    resp=num1/num2;
    return resp;
}

float divisionCero(float num2)
{
    int flag =0;
    if (num2 != 0)
    {
        flag  = 1;
    }
    return flag;
}

float multiplicacion(float num1, float num2)
{
    float resp;
    resp=num1*num2;
    return resp;
}


float factorial(float n)
{
    int i;
    long long resp=1;
    int validarPos;
    int validarDec;

    validarDec = validacionDecimal(n);
    validarPos= validacionPositivos(n);

    if(validarDec!=0 && validarPos!=0)
    {
        for(i=1; i<=n ;i++)
        {
        resp=resp*i;
        }
    }
        else
        {
            resp=0;
        }
    return resp;
}


float validacionDecimal (float num)
{
    int flag;
    if (num - (int) num == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}

float validacionPositivos(float num)
{
    int flag = 0;
    if (num >= (float)0)
    {
        flag = 1;
    }
    return flag;
}
#endif // FUNCIONES_H_INCLUDED

