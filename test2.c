#include <stdio.h>

int main() {
    printf("fizz buzzだよ\n");
    int x;
    scanf("%d", &x);
    if (x % 3 == 0) {
        printf("fizz\n");
    } else if (x % 5 == 0) {
        printf("buzz\n");
    } else {
        printf("%d\n", x);
    }
    return 0;
}