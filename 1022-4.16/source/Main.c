#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, j;

    // Pattern (A)
    printf("(A)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // Pattern (B)
    printf("(B)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // Pattern (C)
    printf("(C)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 0; j < 10 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // Pattern (D)
    printf("(D)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 0; j < 10 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}