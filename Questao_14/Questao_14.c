#include <stdio.h>
#include <locale.h>

int num_car;
float sal, comis, vend;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Digite qual o seu salário base: ");
    scanf("%f", &sal);
    printf("Digite o valor da comissão por carro vendido: ");
    scanf("%f", &comis);
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &num_car);
    printf("Digite o valor total das suas vendas: ");
    scanf("%f", &vend);

    printf("\nSeu salário com as comissões e extras é: %.2f", sal + (comis * num_car) + (vend * 0.05));

    while(getchar() != '\n');

    printf("\n\nAperte enter para fechar a tela.");
    getchar();

    return 0;
}