#include <stdio.h>
#include <math.h>
void ifprime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        printf("%d is not a prime", n);
    }
    else
    {
        printf("%d is a prime", n);
    }
}

void ifleap(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("yes %d is a leap year\n", year);
    }
    else
    {
        printf("no %d is not a leap year\n", year);
    }
}

void ifpalindrome(int n)
{
    int r, reverse = 0;
    int test = n;
    for (int i = 0; n != 0; i++)
    {
        r = n % 10;
        reverse = reverse * 10 + r;
        n = n / 10;
    }
    if (reverse == test)
    {
        printf("yes %d is a palindrome", reverse);
    }
    else
    {
        printf("no %d is not a palindrome", reverse);
    }
}

void palasminuskejiro(int n)
{
    if (n > 0)
    {
        printf("%d is positve \n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }
}

void ifarmstrong(int n)
{
    int test = n;
    int count = 0, rem, last, temp = 0, final = 0;

    // total digit calculation

    int temp_n = n;
    while (temp_n != 0)
    {
        temp_n /= 10;
        count++;
    }
    // armstrong checking

    while (test != 0)
    {
        last = test % 10;
        temp = (int)round(pow(last, count));
        final += temp;
        test /= 10;
    }

    if (n == final)
    {
        printf("yes %d is a armstrong number\n", n);
    }
    else
    {
        printf("no %d is not an armstrong number\n", n);
    }
}
int factorial(int n)
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
void ifstrong(int n)
{
    int test = n;
    int temp, check = 0;
    while (test != 0)
    {
        temp = test % 10;
        check = factorial(temp) + check;
        test = test / 10;
    }
    if (n == check)
    {
        printf("yes %d is an strong number\n", n);
    }
    else
    {
        printf("no %d is not an strong number\n", n);
    }
}
int main()
{
    int choice, result;
    int year, n;
    char continueChoice;
    do
    {
        // Showing menu
        printf("\n1. if the number is prime?\n");
        printf("2. if a number is strong?\n");
        printf("3. if a number is palindrome?\n");
        printf("4. if a number is positive negative or zero?\n");
        printf("5. if a number is armstrong?\n");
        printf("6. if the year is leap?\n");

        printf("Enter the operation number to continue: ");
        scanf("%d", &choice);

        if (choice == 6)
        {
            printf("enter year: ");
            scanf("%d", &year);
        }
        else if (choice < 6 && choice > 0)
        {
            printf("Enter the value: ");
            scanf("%d", &n);
        }
        else
        {
            printf("Invalid input!\n");
        }

        // Taking action according to input
        switch (choice)
        {
        case 1:
            ifprime(n);
            break;
        case 2:
            ifstrong(n);
            break;
        case 3:
            ifpalindrome(n);
            break;
        case 4:
            palasminuskejiro(n);
            break;
        case 5:
            ifarmstrong(n);
            break;
        case 6:
            ifleap(year);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }

        printf("\ndo you want to perform another operation? Press any key to continue or 'x' to exit: ");
        getchar();
        continueChoice = getchar();

    } while (continueChoice != 'x');

    printf("Program ended.\n");

    return 0;
}
