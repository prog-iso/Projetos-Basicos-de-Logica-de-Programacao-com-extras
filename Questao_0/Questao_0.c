#include <stdio.h>
#include <locale.h>

int a;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    //faça o codigo aqui
    
    while(getchar() != '\n');

    printf("\n\nAperte enter para fechar a tela.");
    getchar();

    return 0;
}