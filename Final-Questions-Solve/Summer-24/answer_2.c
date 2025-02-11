#include <stdio.h>

int main() {
    int x;
    float y;

    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Enter a float: ");
    scanf("%f", &y);

    printf("x = %d, y = %f", x, y);

    return 0;
}
