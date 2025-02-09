// checking type of number

#include <stdio.h>
#include <math.h>

int prime(int num)
{
    int i, fact;
    if (num >= 1)
    {
        int i = 1, fact = 0;
        for (i; i <= num; i++)
        {
            num % i == 0;
            fact++;
        }

        if (fact == 2)
        {
            printf("%d is a Prime number.\n", num);
        }
        else
        {
            printf("%d is NOT a Prime number.\n", num);
        }
    }
}

int leapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is NOT a Leap Year.\n", year);
    }
}

int palindrome(int num)
{
    int i, rem, reverse = 0;
    for (i = num; i != 0; i /= 10)
    {
        rem = i % 10;
        reverse = reverse * 10 + rem;
    }
    if (num == reverse)
    {
        printf("%d is a PALINDROME number.\n", num);
    }
    else
    {
        printf("%d is not a palindrome number!\n", num);
    }
}

int numType(int num)
{
    if (num >= 1)
    {
        printf("%d is a Positive number.\n", num);
    }
    else if (num == 0)
    {
        printf("It is ZERO!\n");
    }
    else
    {
        printf("%d is a negative number.\n", num);
    }
}

int armstrong(int num)
{
    int x, rem, checkmate = 0, count = 0;

    x = num;

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    num = x;

    while (x != 0) {
        rem = x % 10;
        checkmate += pow(rem, count); 
        x /= 10;
    }

     if (checkmate == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

}

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int strong(int num){

    int x = num, sum = 0, rem;

    while (num > 0) {
        rem = num % 10;
        sum += factorial(rem);
        num /= 10;
    }

    if (sum == x){
         printf("%d is a Strong Number.\n", x);
    }
    else {
        printf("%d is NOT a Strong Number.\n", x);
    }   
}

int main()
{
    int num, year, choice, continueChoice;

    do
    {
        printf("Enter what you want this program to do for you:\n");
        printf("1. To check if a number is Prime Number\n");
        printf("2. To check if a number is palindrome\n");
        printf("3. To check if a number is positive,nagative or zero\n");
        printf("4. To check if a number is armstrong\n");
        printf("5. To check if a number is strong\n");
        printf("6. To check if a number is leap\n");

        printf("Enter your choice [1-6]: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("Enter the number:");
            scanf("%d", &num);
        }
        else if (choice == 6)
        {
            printf("Enter year:");
            scanf(" %d", &year);
        }
        else
        {
            printf("Invalid input!\n");
        }

        switch (choice)
        {
        case 1:
            // prime number
            prime(num);
            break;
        case 2:
            // palindrome number
            palindrome(num);
            break;
        case 3:
            // +ve, -ve or 0
            numType(num);
            break;
        case 4:
            // armstrong number
            armstrong(num);
            break;
        case 5:
            //strong number
            strong(num);
            break;
        case 6:
            // Leap year
            leapYear(year);
            break;
        default:
            printf("Please choose correct option!!\n");
        }

        printf("Press any key to continue or 'y' to exit: ");
        getchar();
        continueChoice = getchar();

    } while (continueChoice != 'y');

    printf("Program Ended.\n");

    return 0;
}