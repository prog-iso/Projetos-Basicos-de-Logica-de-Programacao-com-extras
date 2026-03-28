#include <stdio.h>
#include <locale.h>

float num1, num2;
int opt;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Vamos Fazer conta !!!\n(eu, não você né?)\n\n");
    
    printf("Me dê um número: ");
    scanf("%f", &num1);
    printf("Me dê outro número: ");
    scanf("%f", &num2);

    printf("\nAgora me diz, você vai querer que eu:\n1 - Some eles\n2 - Subtraia eles\n3 - Divida eles\n4 - Divida eles");
    printf("\n\nFaça sua escolha: ");
    scanf("%d", &opt);
    printf("\n\n");
    switch (opt)
    {
    case 1:
        printf("A soma deles é: %g", num1+num2);
        break;
    
    case 2:
        printf("A diferença deles é: %g", num1-num2);
        break;
    
    case 3:
        printf("A divisão deles é: %.2f", num1/num2);
        break;
    
    case 4:
        printf("O produto deles é: %g", num1*num2);
        break;
    
    }

    while(getchar() != '\n');
    printf("\n\nDigite enter para fechar o programa.");
    getchar();
}