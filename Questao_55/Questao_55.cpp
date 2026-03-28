#define _USE_MATH_DEFINES

#include <stdio.h>
#include <locale>
#include <math.h>

#ifdef _WIN32
    #include <windows.h>
#endif

#ifdef __linux__
    #include <unistd.>
#endif

int num_side;
float comp_side;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Vamos calcular a área de alguns poligonos regulares?\n");
    printf("Mas, por favor, escolha um número entre 3 e 5.");

    printf("\n\nVamos, me diga, quantos lados terá esse polígono? ");
    scanf("%d", &num_side);
    printf("E qual o tamanho do lado mesmo hein (obs. ponha em cm)? ");
    scanf("%f", &comp_side);

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

    
    if(num_side > 2 && num_side < 6)
    {
        printf("\nHa! Você achou que eu não conseguiria né?\n");
        printf("Mas, a área do polígono de %d lados é %g centímetros quadrados.", num_side, (num_side*comp_side*comp_side)/(4*tan(M_PI/num_side)));

        if(num_side == 3) printf("\n\nUma curiosidade, já que o número de lados é 3, você calculou a área de um triângulo");
        else if (num_side == 4) printf("\n\nUma curiosidade, já que o número de lados é 4 , você calculou a área de um quadrado");
        else if (num_side == 5) printf("\n\nUma curiosidade, já que o número de lados é 5, você calculou a área de um pentagono");
    }
    else if (num_side < 2) printf("\nLamento, mas, se não tiver pelo menos 3 lados, não é um polígono.\nE aí não tem área.");
    else printf("Como você digitou um número maior que 5, não consigo calcular.");

    while(getchar() != '\n');
    printf("\n\n Ah, quase ia me esquecendo, digite enter para fechar esse teste simples.");
    getchar();
}