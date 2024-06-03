#include <stdio.h>
#include <stdlib.h>

// Function to find the minimum number of steps and the path
void findMinStepsAndPath(int SX, int SY, int DX, int DY) {
    int x_diff = abs(DX - SX);
    int y_diff = abs(DY - SY);
    int min_steps = (x_diff > y_diff) ? x_diff : y_diff;

    printf("Min Steps = %d\n", min_steps);
    printf("Path: ");

    int x = SX, y = SY;

    while (x != DX || y != DY) {
        if (x < DX && y > DY) {
            printf("UL--");
            x++;
            y--;
        } else if (x < DX && y < DY) {
            printf("UR--");
            x++;
            y++;
        } else if (x > DX && y > DY) {
            printf("LL--");
            x--;
            y--;
        } else if (x > DX && y < DY) {
            printf("LR--");
            x--;
            y++;
        } else if (x < DX) {
            printf("R--");
            x++;
        } else if (x > DX) {
            printf("L--");
            x--;
        } else if (y < DY) {
            printf("U--");
            y++;
        } else if (y > DY) {
            printf("D--");
            y--;
        }
    }

    printf("\b\b  \n"); // To remove the trailing '--'
}

int main() {
    int SX, SY, DX, DY;

    // Input from the user
    printf("Enter source coordinates (SX, SY): ");
    scanf("%d %d", &SX, &SY);
    printf("Enter destination coordinates (DX, DY): ");
    scanf("%d %d", &DX, &DY);

    // Find and display the minimum steps and path
    findMinStepsAndPath(SX, SY, DX, DY);

    return 0;
}
