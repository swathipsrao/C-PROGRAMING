#include <stdio.h>

int main() {
    int n, a, d, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    sum = (n * (2 * a + (n - 1) * d)) / 2;

    printf("Sum of the arithmetic series: %d\n", sum);
    return 0;
}