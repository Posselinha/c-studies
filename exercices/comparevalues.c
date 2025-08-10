#include <stdio.h>

int main(void)
{
    int i, j, result;
    printf("What values does you want to compare (x, y): ");
    scanf("%d, %d", &i, &j);
    result = i < j ? -1 : i > j ? 1 : 0;
    printf("The result is: %d", result);
    return 0;
}
