// Converter

#include <stdio.h>
#include <math.h>

// functions
// function to convert Celsius to Fahrenheit
int celsiusToFahrenheit(int a)
{
    int f;
    f = (a * 9 / 5) + 32;
    return f;
}

// function to convert Fahrenheit to Celsius
int fahrenheitToCelsius(int a)
{
    int c;
    c = (a - 32) * 5 / 9;
    return c;
}

// function to convert Binary to Decimal
int binaryToDecimal(long long a)
{

    int remainder, d = 0, i = 0;
    while (a != 0)
    {
        remainder = a % 10;

        if (remainder != 0 && remainder != 1)
        {
            printf("please enter correct binary number!\n");
            return -1;
        }

        d = d + remainder * pow(2, i);
        a = a / 10;
        i++;
    }
    return d;
}

// function to convert Character to ASCII code
int characterToCode(char alphabet)
{
    int code;
    code = (int)alphabet;
    return code;
}

// function to convert minutes to hours
void minutesToHours(int a, int *h, int *m)
{
    *h = a / 60;
    *m = a % 60;
}

// functions to convert km to miles
float KilometerToMiles(int a)
{
    float m;
    m = a * 0.621371;
    return m;
}

// main function
int main()
{
    // variable declaration
    int choice, a, result, h, m;
    char alphabet, continueProgram;

    // ensures iteration of program
    do
    {
        // Menu
        printf("Choose from the following options for conversion of:\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Binary to Decimal\n");
        printf("4. Character to ASCII Code\n");
        printf("5. Minutes to Hours\n");
        printf("6. Kilometer to Miles\n");

        // User choice
        printf("Enter your choice :");
        scanf("%d", &choice);

        // conversion value taken from user
        if (choice >= 1 && choice <= 6 && choice != 4)
        {
            printf("Enter the value:");
            scanf("%d", &a);
        }
        else if (choice == 4)
        {
            printf("Enter character:");
            scanf(" %c", &alphabet);
        }
        else
        {
            printf("Invalid choice!");
        }

        // choice actions
        switch (choice)
        {
        case 1:
            printf("%d degree Celcius is: %d F\n", a, celsiusToFahrenheit(a));
            break;
        case 2:
            printf("%d F is: %d degree Celcius\n", a, fahrenheitToCelsius(a));
            break;
        case 3:
            result = binaryToDecimal(a);
            if (result != -1)
            {
                printf("The Binary Number %d is %d in Decimal Number System\n", a, result);
            }
            break;
        case 4:
            printf("The ASCII Code of character '%c' is %d\n", alphabet, characterToCode(alphabet));
            break;
        case 5:
            minutesToHours(a, &h, &m);
            printf("Hours: %d\n", h);
            printf("Minutes: %d\n", m);
            break;
        case 6:
            printf("%d km = %0.2f miles\n", a, KilometerToMiles(a));
            break;
        default:
            printf("Please enter correct choice!!\n");
        }

        printf("press any key to continue conversion or press 'y' to exit!\n");
        getchar();
        continueProgram = getchar();

    } while (continueProgram != 'y');
    {
        printf("Program Ended!");
    }

    return 0;
}