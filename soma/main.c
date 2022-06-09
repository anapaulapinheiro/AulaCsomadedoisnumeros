#include <stdio.h>
#include <stdlib.h>

int Soma(int a, int b)

{
    int resultado;
    resultado = a + b;
    return resultado;
}
int main ()
{
    int a, b, resultadoDaSoma;
    a =10;
    b=12;
    resultadoDaSoma = Soma(a,b);

    printf("a soma de %d com %d é %d", a,b, resultadoDaSoma);
    return 0;
}
