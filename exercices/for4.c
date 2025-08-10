#include <stdio.h>

int main(void)
{
    for(int i = 9384; ; i /= 10){
        printf("%d ", i);
        if(i == 0) {
            break;
        }
    }
    return 0;
}
