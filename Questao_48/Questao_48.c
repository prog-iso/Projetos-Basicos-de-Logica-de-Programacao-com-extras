#include <stdio.h>
#include <locale.h>

float prova_1, prova_2, prova_opt = -1, media;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Hoje, vamos calcular a nota desse(a) aluno(a).\n\n");

    printf("Quanto ele(a) tirou na primeira prova? ");
    scanf("%f", &prova_1);
    printf("E na segunda? ");
    scanf("%f", &prova_2);

    printf("Ele fez a optativa?\nSe fez, digite 1, se não digite 2: ");
    
    while(getchar() != '\n');
    if(getchar() == '1')
    {
        printf("Quanto ele tirou na prova optativa? ");
        scanf("%f", &prova_opt);

        if(prova_1 >= prova_2 && prova_opt >= prova_2) media = (prova_1+prova_opt)/2;
        else if(prova_2 >= prova_1 && prova_opt >= prova_1) media = (prova_2+prova_opt)/2;
        else media = (prova_1+prova_2)/2;
    }
    else media = (prova_1+prova_2)/2;

    printf("\nFinalmente, a nota desse(a) aluno(a) é: %g", media);
    
    if(media >= 6) printf("\nBoas notícias! Ele(a) passou.");
    else if(media >= 3) printf("\nAH, ele(a) vai ter que fazer o exame.");
    else printf("\nQue triste, ele(a) reprovou direto.");

    while(getchar() != '\n');
    printf("\n\nDigite enter para fechar o programa.");
    getchar();
}