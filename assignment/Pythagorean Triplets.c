#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the initial point of the range: ");
    scanf("%d", &start);
    printf("Enter the final point of the range: ");
    scanf("%d", &end);

    printf("Pythagorean Triplets within the range [%d, %d]:\n", start, end);

    for (int a = start; a <= end; a++) {
        for (int b = a; b <= end; b++) {
            for (int c = b + 1; c <= end; c++) {
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
