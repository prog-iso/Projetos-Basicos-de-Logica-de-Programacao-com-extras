#include <stdio.h>
#include <locale.h>

int a;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    
    printf("Digite uma medida em centímetros: ");
    scanf("%d", &a);

    printf("A medida em metros é: %.3f\n", a/100.0);

    while(getchar() != '\n');

    printf("Aperte enter para fechar a tela.");
    getchar();

    return 0;
}