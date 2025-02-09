#include <stdio.h>
#include <stdbool.h>

// functions

int GCD(int a, int b)
{
    for (int i = 0; b != 0; i++)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int LCM(int a, int b)
{
    int lcm = (a * b) / GCD(a, b);
    return lcm;
}

bool primerange(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int digitcount(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

// starting of main function

int main()
{
    char continue_choice;
    do
    {
        int a, b, n, c, result;

        printf("1.find GCD of two numbers\n");
        printf("2.find LCM of two numbers\n");
        printf("3.find PRIME numbers in a specific range\n");
        printf("4.find number of digits in a number\n");

        printf("enter your operation number to continue: ");
        scanf("%d", &c);

        // taking 2 inputs 
        if (c <= 2 && c > 0)
        {
            printf("enter two numbers (with a space): ");
            scanf("%d", &a);
            scanf("%d", &b);
        }

        // taking 1 input 

        if (c == 4)
        {
            printf("enter a number: ");
            scanf("%d", &n);
        }
        
        // other half of primerange function

        if (c == 3)
        {

            printf("enter your start point:");
            scanf("%d", &a);

            printf("enter your end point:");
            scanf("%d", &b);

            for (int i = a; i <= b; i++)
            {
                if (primerange(i))
                {
                    printf("%d  ", i);
                }
            }
            printf("\n");
        }

        // error handling

        if (c > 4)
        {
            printf("\ninvalid input\n");
        }

        // switch case for function calls according to input

        switch (c)
        {
        case 1:
            result = GCD(a, b);
            printf("\nthe GCD of %d and %d is %d\n", a, b, result);
            break;
        case 2:
            result = LCM(a, b);
            printf("\nthe LCM of %d and %d is %d\n", a, b, result);
            break;
        case 4:
            result = digitcount(n);
            printf("\n%d are total digits in %d\n", result, n);
            break;
        }
        
        // ye toh terko pata hi hai
        
        printf("\npress any key to continue and press 'x' to exit!\n");
        getchar();
        continue_choice = getchar();
    } while (continue_choice != 'x' || continue_choice != 'X');
    printf("program ended\n");
    return 0;
}
