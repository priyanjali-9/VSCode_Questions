//Question 14 — Print Floyd's Triangle
#include <stdio.h>

int main() {
    int n;
    char ch = 'A';
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}
