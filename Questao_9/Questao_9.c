#include <stdio.h>
#include <locale.h>

float a;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");
    printf("Digite a medida do lado do quadrado em metros: ");
    scanf("%f", &a);
    printf("\nA medida em metros quadrados da área é: %.3f\n", a*a);
    printf("A medida em metros quadrados do dobro da área é: %.3f\n\n", 2*a*a);

    while(getchar() != '\n');

    printf("Aperte enter para fechar a tela.");
    getchar();

    return 0;
}