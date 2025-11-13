#include <stdio.h>

int main() {
    int rows;
    char a[10] = "Clive";

    printf("Hello Burat si %s!\n", a);
    printf("Hello, please enter your row: ");
    scanf("%d", &rows);
    printf("Hello, your row number is %d\n", rows);

    for( int i=1; i<=rows; i++){

        for( int j=1; j<=i; j++){

        printf("%d ", j);


        }
        printf("\n");
    }

    for( int i=rows; i>=1; i--){

        for( int j=1; j<=i; j++){

        printf("%d ", j);


        }
        printf("\n");
    }
    return 0;
}