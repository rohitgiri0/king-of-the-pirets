#include <stdio.h>

// declaring functions 

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int power(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++) {
        result *= a; 
    }
    return result;
}

int factorial(int n) {
    int fact = 1;
    for (int i = n; i >= 1; i--) {
        fact = fact * i;
    }
    return fact;
}

// main program starts here
int main() {
    int choice, result;
    int a, b, n;
    char continueChoice;

    do {
        // Showing menu
        printf("\n1. Sum of two numbers\n");
        printf("2. Subtraction of two numbers\n");
        printf("3. Product of two numbers\n");
        printf("4. Division of two numbers\n");
        printf("5. Power\n");
        printf("6. Factorial of a number\n");

        printf("Enter the operation number to continue: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Enter the number you need the factorial of: ");
            scanf("%d", &n);
        } else if (choice < 6 && choice > 0) {
            printf("Enter the 1st value: ");
            scanf("%d", &a);
            printf("Enter the 2nd value: ");
            scanf("%d", &b);
        } else {
            printf("Invalid input!\n");
        }

        // Taking action according to input
        switch (choice) {
            case 1:
                result = sum(a, b);
                printf("\nThe sum of %d and %d is: %d\n", a, b, result);
                break;
            case 2:
                result = subtract(a, b);
                printf("\nThe subtraction of %d and %d is: %d\n", a, b, result);
                break;
            case 3:
                result = product(a, b);
                printf("\nThe multiplication of %d and %d is: %d\n", a, b, result);
                break;
            case 4:
                result = division(a, b);
                printf("\nThe quotient is: %d\n", result);
                printf("The remainder is: %d\n", mod(a, b));
                break;
            case 5:
                result = power(a, b);
                printf("\nThe power of %d raised to %d is: %d\n", a, b, result);
                break;
            case 6:
                result = factorial(n);
                printf("\nThe factorial of %d is: %d\n", n, result);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

        // Ask if the user wants to continue
        printf("\ndo you want to perform another operation? Press any key to continue or 'x' to exit: ");
         getchar(); //to clear all the previous input buffer
        continueChoice = getchar();

    } while (continueChoice != 'x');  // exits the loop if 'x' is pressed

    printf("Program ended.\n");

    return 0;
}
