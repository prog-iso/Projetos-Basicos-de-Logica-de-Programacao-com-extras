#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    float larg, comp, pot;

    printf("Qual o tamanho do seu cômodo?\n");
    printf("Digite a largura (em metros): ");
    scanf("%f", &larg);
    printf("Agora, digite o comprimento (em metros): ");
    scanf("%f", &comp);
    printf("E qual a potencia das lampadas usadas? ");
    scanf("%f", &pot);

    if(((comp*larg/pot) - (int)(comp*larg/pot)) == 0) printf("O número de lampadas que você precisa para esse cômodo é: %d", (int)(larg*comp/pot));
    else printf("O número de lampadas que você precisa para esse cômodo é: %d", (int)(comp*larg/pot) + 1);

    while(getchar() != '\n');

    printf("\n\nDigite enter para fechar o programa.");
    getchar();
}