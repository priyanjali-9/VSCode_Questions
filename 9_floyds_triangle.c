//Question 9 — Print an Inverted Centered Pyramid

#include <stdio.h>

int main() {
    int n, count = 1;
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count++);
        }
        printf("\n");
    }
    return 0;
}
