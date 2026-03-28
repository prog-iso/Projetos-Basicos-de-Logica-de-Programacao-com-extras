#include <stdio.h>
#include <locale.h>

#ifdef _WIN32
    #include <windows.h>
#endif

#ifdef __linux__
    #include <unistd.>
#endif

float num1, num2;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Vamos ver se o computador é esperto.\n");

    printf("Vou adivinhar qual desses 2 numéros é maior!\n\n");
    printf("Fale, ou melhor, digite um número: ");
    scanf("%f", &num1);
    printf("Agora me dê outro número: ");
    scanf("%f", &num2);

    for(int i = 0; i < 3; i++)
    {
        printf("Vejamos");
        for(int j = 0; j < 3; j++)
        {   
            #ifdef _WIN32
                Sleep(500);
            #endif

            #ifdef __linux__
                usleep(500);
            #endif

            printf("  .");
        }
        printf("\n");
    }

    #ifdef _WIN32
        Sleep(1000);
    #endif

    #ifdef __linux__
        usleep(1000);
    #endif
    
    if (num1 > num2) printf ("\nSabia o primeiro (%g) é maior que o segundo (%g) !", num1, num2);
    else if (num1 < num2) printf ("\nSabia o segundo (%g) é maior que o primeiro (%g) !", num2, num1);
    else printf("Sério que os 2 eram iguais? Que fácil, kkk.");

    while(getchar() != '\n');
    printf("\n\n Ah, quase ia me esquecendo, digite enter para fechar esse teste simples.");
    getchar();

    return 0;
}