#include <stdio.h>
#include <locale.h>

float odom_inic, odom_fim, comb, val;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Vamos calcular quanto você andou e lucrou hoje!!!\n\n");
    
    printf("Qual a marcação inicial (em Km) do odômetro? ");
    scanf("%f", &odom_inic);
    printf("Qual a marcação do odômetro (também em Km) no final do dia? ");
    scanf("%f", &odom_fim);

    printf("Quantos litros de combustível você gastou hoje? ");
    scanf("%f", &comb);
    printf("Por último (tá acabando)\nQuanto você recebeu (em reais) hoje? ");
    scanf("%f", &val);

    printf("\nVamos às notícias boas!\nVocê fez %.2f Km/L hoje (em média)\nE LUCROU %.2f reais.", (odom_fim-odom_inic)/comb, val - 2.9*comb);

    while(getchar() != '\n');
    printf("\n\nDigite enter para fechar o programa.");
    getchar();
}