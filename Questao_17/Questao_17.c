#include <stdio.h>
#include <locale.h>

float raio;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Digite o raio do seu círculo: ");
    scanf("%f", &raio);

    printf("A área desse círculo é: %.2f", raio*raio*3.142);
    
    while(getchar() != '\n');

    printf("\n\nAperte enter para fechar a tela.");
    getchar();

    return 0;
}