#include <stdio.h>
#include <math.h>

int main() {
    float number, squareRoot;

    while (1) {
        printf("Please enter a positive number (Enter \"-1\" to shut down): ");
        scanf("%f", &number);

        if (number == -1) {
            printf("Program is shutting down...\n");
            break;
        }

        if (number < 0) {
            printf("Do not do that.\n");
            continue; 
        }

        squareRoot = sqrt(number);
        if (squareRoot == (int)squareRoot) {
            printf("Square root of %.1f is an integer and it is: %.1f\n", number, squareRoot);
        } else {
            printf("Square root of %.1f is not an integer.\n", number);
        }
    }

    return 0;
}