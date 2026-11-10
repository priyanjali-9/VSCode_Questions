//Question 11 — Print a Hollow Right-Angled Triangle
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
