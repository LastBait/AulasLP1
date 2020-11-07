/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("Introduz o valor de a: ");
    scanf("%f", &a);
    printf("Introduz o valor de b: ");
    scanf("%f", &b);
    c=a+b;
    printf("\n %f", c);
    c=a-b;
    printf("\n %f", c);
    c=a*b;
    printf("\n %f", c);
    c=a/b;
    if (b=0)
    {
        printf("\n Impossivel fazer a divisao!");
    }
    else
    {
        printf("\n %f", c);
    }
    
    return 0;
}

