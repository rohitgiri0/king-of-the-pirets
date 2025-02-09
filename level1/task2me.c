#include <stdio.h>
#include <math.h>

// declaring functions

float celsiustofahrenheit(float c)
{
    return c * (9.0 / 5.0) + 32;
}

float fehrenheittocelsius(float f)
{
    return (f - 32) * 5.0 / 9.0;
}

int binarytodecimal(int binary)
{
    int decimal = 0, i = 0, rem;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * pow(2, i);
        binary = binary / 10;
        i++;
    }
    return decimal;
}

void chartoascii(char ch)
{
    printf("The ASCII code of '%c' is: %d\n", ch, ch);
}

float mintohour(int minute)
{
    return (float)minute / 60;
}

float kilotomile(int kilometer)
{
    return kilometer * 0.621371;
}

// starting of main function

int main()
{
    float result;
    int a, choice;
    char ch,continueChoice;
do{
    printf("\nTypes of conversions this program can do:");
    printf("\n1. Convert Celsius to Fahrenheit");
    printf("\n2. Convert Fahrenheit to Celsius");
    printf("\n3. Convert Binary to Decimal");
    printf("\n4. Convert Minutes to Hours");
    printf("\n5. Convert Kilometers to Miles");
    printf("\n6. Convert Character to ASCII Code");
    printf("\n\nEnter your choice [1-6]: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5)
    {
        printf("\nEnter your value for conversion: ");
        scanf("%d", &a);
    }
    else if (choice == 6)
    {
        printf("Enter your character: ");
        scanf(" %c", &ch);
    }
    else
    {
        printf("\nInvalid input!\n");
        return 1;
    }

    switch (choice)
    {
    case 1:
        result = celsiustofahrenheit(a);
        printf("\n%d Celsius in Fahrenheit is: %.2f\n", a, result);
        break;
    case 2:
        result = fehrenheittocelsius(a);
        printf("\n%d Fahrenheit in Celsius is: %.2f\n", a, result);
        break;
    case 3:
        printf("\n%d in Decimal is: %d\n", a, binarytodecimal(a));
        break;
    case 4:
        result = mintohour(a);
        printf("\n%d minutes in hours is: %.2f\n", a, result);
        break;
    case 5:
        result = kilotomile(a);
        printf("\n%d kilometers in miles are: %.2f\n", a, result);
        break;
    case 6:
        chartoascii(ch);
        break;
    default:
        printf("Invalid choice! Please try again.\n");
    }
        // Ask if the user wants to continue
        printf("\ndo you want to perform another operation? Press any key to continue or 'x' to exit: ");
         getchar();
        continueChoice = getchar();

    } while (continueChoice != 'x');  

    printf("Program terminated.\n");
    return 0;
}
