//Question 13 — Print a Checkerboard
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }
    return 0;
}
