
//MINLAY, CLIVE DUSTINE M. DIT 1-2
#include <stdio.h>

int main() {
    
    int i = 1;

    printf("Print numbers from 1 to 10 using the While Loop :\n");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nFor Loop (Even numbers 2 to 20):\n");
    for (i = 2; i <= 20; i += 2) {
        printf("%d ", i);
    }

    printf("\n\nDo-While Loop (1 to 5):\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}

