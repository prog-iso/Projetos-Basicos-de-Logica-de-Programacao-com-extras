#include <stdio.h>
#include <locale.h>
#include <math.h>

int num_leps, num_refil; 
float tam_pist, consume_fuel;

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Vamos nos preparar para a grande corrida!!!\n\n");

    printf("Primeiro, qual o tamanho da pista (em metros)? ");
    scanf("%f", &tam_pist);
    
    printf("Quantas voltas serão? ");
    scanf("%d", &num_leps);

    printf("Quantas vezes vocês planejam abastecer? ");
    scanf("%d", &num_refil);

    printf("Quanto consome o seu carro (em Km/L)? ");
    scanf("%f", &consume_fuel);

    printf("\nCom isso para podermos vencer temos:");
    printf("Que abastecer %.2f litros para podermos começar a partida.", tam_pist*num_leps/(1000*consume_fuel*num_refil));

    while(getchar() != '\n');
    printf("\n\nDigite enter para fechar o programa.");
    getchar();
    
    return 0;
}