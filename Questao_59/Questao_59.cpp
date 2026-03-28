#include <stdio.h>
#include <locale.h>
#include <math.h>

float side1, side2, side3;

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");



    printf("Vamos ver que tipo de triângulos teremos hoje!!!\n");
    printf("Digite o tamanho dos lados em metros\n(com espaço entre eles)\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    if(side1 >= (side2+side3) || side2 >= (side1+side3) || side3 >= (side2+side1) )
    {
        printf("\nIsso não é um triângulo (não obedece a desigualdade triangular, |b - c| < a < b + c)");
        return 0;
    }

    if(side1 >= side2 && side1 >= side3)
    {
        if(pow(side1, 2) == pow(side2, 2) + pow(side3, 2)) printf("\nEsse triângulo é retângulo");
        else if(pow(side1, 2) > pow(side2, 2) + pow(side3, 2)) printf("\nEsse triângulo é obtusângulo");
        else printf("\nEsse triângulo é acutângulo");
    }
    else if(side2 >= side1 && side2 >= side3)
    {
        if(pow(side2, 2) == pow(side1, 2) + pow(side3, 2)) printf("\nEsse triângulo é retângulo");
        else if(pow(side2, 2) > pow(side1, 2) + pow(side3, 2)) printf("\nEsse triângulo é obtusângulo");
        else printf("\nEsse triângulo é acutângulo");
    }
    else
    {
        if(pow(side3, 2) == pow(side1, 2) + pow(side2, 2)) printf("\nEsse triângulo é retângulo");
        else if(pow(side3, 2) > pow(side1, 2) + pow(side2, 2)) printf("\nEsse triângulo é obtusângulo");
        else printf("\nEsse triângulo é acutângulo");
    }
 

    while(getchar() != '\n');
    printf("\n\nDigite enter para fechar o programa.");
    getchar();
}