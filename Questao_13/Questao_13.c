#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    float val;

    printf("Qual o custo de construção do carro? ");
    scanf("%f", &val);

    printf("O valor do carro com custos de distribuição (%%28) e de impostos (45%%) é\n%.2f", val*1.28*1.45);

    while(getchar() != '\n');
    printf("\n\nDigite enter para encerrar o código");
    getchar();
}