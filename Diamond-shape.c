#include <stdio.h>
#include <string.h>

int main() {
    int i = 0,j = 0,k = 0;
    for (i = 1; i <= 4; i++){
        for (j = 1; j <= 4-i; j++){
            printf(" ");
        }
        for (k = 1; k <= 2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i<=3; i++){
        for (j = 1; j <= i; j++){
            printf(" ");
        }
        for (k = 1; k <= 7-2*i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}