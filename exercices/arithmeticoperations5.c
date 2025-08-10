#include <stdio.h>

int main(void)
{
    int i, j;
    i = 1;
    j = 2;

    printf("%d ", i += j);
    printf("%d %d\n", i, j);

    i = 1;
    j = 2;

    printf("%d ", i--);
    printf("%d %d\n", i, j);

    i = 1;
    j = 2;

    printf("%d\n", i * j / i);

    printf("%d ", i % ++j);
    printf("%d %d\n", i, j);
}
