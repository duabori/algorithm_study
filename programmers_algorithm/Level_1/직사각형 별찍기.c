#include <stdio.h>

int main(void) {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
