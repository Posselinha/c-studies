#include <stdio.h>

int main(void)
{
    int sum, i; // define as variaveis
    sum = 0; // valor de sum é 0
    for(i = 0; i < 10; i++) {
    // i é 0, loop se i for menor que 10, incrementa i
        if (i % 2) continue; // pula se i nao for divisivel por 2
        // modulo traz o restante da divisão, qualquer numero
        // é considerado como true e 0 como false, então
        // se não tiver divisão é false, se tiver é true
        sum += i; // adiciona i na soma
    }
    printf("\n%d\n", sum);
}
