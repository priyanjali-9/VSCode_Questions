//Question 5 — Print a Repeated-Number Triangle

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
