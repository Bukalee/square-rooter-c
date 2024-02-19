#include <stdio.h>
#include <math.h>

int main() {
    int number, squareRoot;

    while (1) {

        do {
     
            printf("Please enter a positive number (Enter \"-1\" to shut down):");
            scanf("%d", &number);

            if (number == -1) {
                printf("Program is shutting down...\n");
                break;
            }

            if (number < 0) {
                printf("Do not do that.\n");
            } 

        }while (number < 0);

        if (number == -1) {
            break;
        }

        squareRoot=sqrt(number);
        if (squareRoot*squareRoot == number) {
            printf("Square root of %d is an integer and it is: %d\n", number, squareRoot);
        } else {
            printf("Square root of %d is not an integer.\n", number);
        }  

    }
    return 0;
}