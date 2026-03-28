#include <stdio.h>
#include <locale.h>

float a,b;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");
    printf("Digite quanto você ganha por hora: ");
    scanf("%f", &a);
    printf("Digite quantas horas você trabalha por mês: ");
    scanf("%f", &b);
    printf("\nSeu salário mensal é: %.2f", a*b);

    while(getchar() != '\n');

    printf("\n\nAperte enter para fechar a tela.");
    getchar();

    return 0;
}