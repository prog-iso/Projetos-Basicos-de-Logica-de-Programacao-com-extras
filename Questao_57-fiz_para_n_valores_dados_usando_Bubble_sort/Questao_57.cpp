#include <stdio.h>
#include <locale>
#include <vector>

int quant;

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Vamos ordenar alguns números\n");
    printf("Quantos você pretende ordenar? ");
    scanf("%d", &quant);

    std::vector<float> numeros(quant);

    for(int i = 0; i < quant; i++)
    {
        printf("\nDigite o %dº número: ", i+1);
        scanf("%f", &numeros[i]);
    }

    printf("\n\nAgora, vamos realmente ordená-los.");

    for(int i = quant - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(numeros[j] < numeros[j+1]) 
            {
                float aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    printf("\nOs números ordenados, por fim são:");

    for(int i = 0; i < quant-1; i++) printf(" %g,", numeros[i]);
    printf(" %g.", numeros[quant-1]);

    while(getchar() != '\n');
    printf("\n\n Ah, quase ia me esquecendo, digite enter para fechar esse teste simples.");
    getchar();
}