#include <stdio.h>

int main() {
    int a, b;
    float c, d;

    // Input read karna
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    // Integers ka sum aur difference
    printf("%d %d\n", a + b, a - b);

    // Floats ka sum aur difference (1 decimal place tak)
    printf("%.1f %.1f\n", c + d, c - d);

    return 0;
}