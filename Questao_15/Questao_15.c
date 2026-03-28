#include <stdio.h>
#include <locale.h>

float f;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Digite a temperatura em Fahrenheit:  ");
    scanf("%f", &f);

    printf("\nA temperatura em Celsius é: %.2f", (f-32)*5/9);

    while(getchar() != '\n');

    printf("\n\nAperte enter para fechar a tela.");
    getchar();

    return 0;
}