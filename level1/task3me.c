

#include <stdio.h>

int fbi(int n);
void fbi2(int n);
int main()
{
    int n;
    printf("how long your fibonacci series should be: ");
    scanf("%d", &n);
    printf("printing series with recursion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fbi(i));
    }
    printf("\n");

    printf("printing series without recursion:\n");

    fbi2(n);
    return 0;
}

// fibonacci sequence with recursion
int fbi(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fbi(n - 1) + fbi(n - 2);
}

// fibonacci without recursion

void fbi2(int n)
{
    int a = 0, b = 1, fbinext;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);

        fbinext = a + b;
        a = b;
        b = fbinext;
    }
}