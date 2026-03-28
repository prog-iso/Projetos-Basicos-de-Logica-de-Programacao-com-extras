#include <stdio.h>
#include <locale.h>

int a,b,c,d;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Digite quantos eleitores participaram da votação: ");
    scanf("%d", &a);

    printf("\nQuantos votos em branco tiveram: ");
    scanf("%d", &b);
    printf("Quantos votos nulos tiveram: ");
    scanf("%d", &c);
    printf("Quantos votos válidos tiveram: ");
    scanf("%d", &d);

    printf("\nO percentual de votos em branco é: %.2f%%\n", ((float)b/a)*100);
    printf("O percentual de votos nulos é: %.2f%%\n", ((float)c/a)*100);
    printf("O percentual de votos válidos é: %.2f%%\n\n", ((float)d/a)*100);

    while(getchar() != '\n');

    printf("Aperte enter para fechar a tela.");
    getchar();

    return 0;
}