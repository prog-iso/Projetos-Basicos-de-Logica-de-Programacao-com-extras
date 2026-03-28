#include <stdio.h>
#include <locale.h>

float n1, n2, n3;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    printf("Digite as notas das 3 atividades do aluno (com espaço entre elas): ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("A média final é\n(com n1 tendo peso 2, n2 peso 3 e n3 tendo peso 5): %.2f", (n1*2+n2*3+n3*5)/10);

    //faça o codigo aqui
    
    while(getchar() != '\n');

    printf("\n\nAperte enter para fechar a tela.");
    getchar();

    return 0;
}