#include <stdio.h>

int main(void)
{
    for(int i = 10; i > 0; --i) {
        if(i % 2) goto divisible;

        printf("%d ", i);
        divisible:
    }
}
