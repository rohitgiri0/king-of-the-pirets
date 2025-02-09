#include<stdio.h>
#include<math.h>

int add(int x, int y){
    return x+y;
}

int multiply(int a, int b){
    return a*b;
}

void mod_quotient(int a, int b, int *quotient, int *remainder) {
    *quotient = a / b;  // Store quotient
    *remainder = a % b; // Store remainder
}

int subtract(int a, int b){
    return b-a;
}

int power(int a, int b){
    return pow(a,b);
}

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {

    int choice,x,y,quotient, remainder;

    printf("choose the number from the given list:\n");
    printf("1. sum of two numbers\n");
    printf("2. Product of two numbers \n");
    printf("3. Division of 2 numbers\n");
    printf("4. Subtraction of 2 numbers\n");
    printf("5. Power of number [Enter a = base and b = exponent]\n");
    printf("6. Factorial of a single number\n");
    printf("Enter the choice here from 1 to 6:");
    scanf("%d", &choice);

    if(choice >= 1 && choice <=5){
        printf("Enter the first value:");
        scanf("%d",&x);
        printf("Enter the second value:");
        scanf("%d",&y);
    } else{
        printf("Enter the value for factorial:");
        scanf("%d",&y);
    }
    
    switch(choice)
    {
        case 1:
            printf("Sum of a and b is: %d", add(x,y));
            break;
        
        case 2:
            printf("Product of a and b is: %d", multiply(x,y));
            break;

        case 3:
            mod_quotient(x, y, &quotient, &remainder);
            printf("Division of a and b:-");
            printf("Quotient: %d\n", quotient);
            printf("Remainder (Modulus): %d\n", remainder);
            break;

        case 4:
            printf("Subtraction of a and b is: %d ", subtract(x,y));
            break;

        case 5:
            printf("Power of a and b is: %d ", power(x,y));
            break;

        case 6:
            printf("Factorial of number is: %d", factorial(y));
            break;
    }
    
    return 0;
}

