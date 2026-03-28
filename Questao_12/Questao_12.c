#include <stdio.h>
#include <locale.h>

int a, c;
float b;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Digite qual o seu salário: ");
    scanf("%d", &a);

    printf("Qual o percentual de reajuste: ");
    scanf("%f", &b);

    printf("Isso foi um aumento ou uma redução? (Digite 1 para aumento e 2 para redução): ");

    scanf("%d", &c);

    if(c == 1)
    {
         printf("\nO seu salário reajustado é: %.2f", a + (a * b / 100));
    }
    else if (c == 2)
    {
         printf("\nO seu salário reajustado é: %.2f", a - (a * b / 100));
    }
    else
    {
        printf("\nOpção inválida.");
    }


    while(getchar() != '\n');

    printf("\n\nAperte enter para fechar a tela.");
    getchar();

    return 0;
}