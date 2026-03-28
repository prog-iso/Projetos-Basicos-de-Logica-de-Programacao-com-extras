#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    float alt, larg, comp;

    printf("Quais as dimenções da sua cozinha?\n");
    printf("Digite as dimenções em metros\n(com espaço entre elas)\n");
    scanf("%f %f %f", &alt, &larg, &comp);

    printf("Como cada caixa cobre uma área de 1.5 metros quadrados,\nvocê precisará de %.0f", round(alt*larg*comp/1.5));

    while(getchar() != '\n');
    printf("\n\nDigite enter para fechar o programa.");
    getchar();
}