//Question 1-Print a Solid Square

#include <stdio.h>

int main() {
    int n;
    printf("enter n=");
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
