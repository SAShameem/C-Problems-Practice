#include<stdio.h>

int main() {
    int num[100], n, i;
    printf("How many numbers? :");
    scanf("%d", &n);
    printf("Enter %d Numbers:", n);

    // Input Numbers
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    // Find Maximum Number
    int max = num[0];
    for (i = 1; i < n; i++) {
        if (max < num[i]) {
            max = num[i];
        }
    }
    printf("Maximum Num: %d\n", max);

    // Find Minimum Number
    int min = num[0];
    for (i = 1; i < n; i++) {
        if (min > num[i]) {
            min = num[i];
        }
    }
    printf("Minimum Num: %d\n", min);

    // Find Second Maximum Number
    int second_max;
    if (num[0] == max) {
        second_max = num[1];
    } else {
        second_max = num[0];
    }
    for (i = 1; i < n; i++) {
        if (num[i] != max && num[i] > second_max) {
            second_max = num[i];
        }
    }
    printf("Second Maximum Num: %d\n", second_max);

    // Find Second Minimum Number
    int second_min;
    if (num[0] == min) {
        second_min = num[1];
    } else {
        second_min = num[0];
    }
    for (i = 1; i < n; i++) {
        if (num[i] != min && num[i] < second_min) {
            second_min = num[i];
        }
    }
    printf("Second Minimum Num: %d\n", second_min);

    return 0;
}
