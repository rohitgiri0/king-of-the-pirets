#include <stdio.h>
#include <limits.h>
int seclar(int arr[], int n)
{
    int first = INT_MIN;
    int second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }
    if (second == INT_MIN)
    {
        printf("theres no 2nd largest element\n");
        return -1;
    }
    return second;
}

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void removedup(int arr[], int *n){
    for(int i=0; i<*n; i++){
        for(int j=i+1; j<*n; j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<*n-1; k++){
                    arr[k]=arr[k+1];
                }
                (*n)--;
                j--;
            }
        }
    }
}

int main()
{
    printf("enter the size of your array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = seclar(arr, n);
    printf("\nthe second largest element is: %d", result);
    reverse(arr, n);
    printf("\n");
    printf("reversed array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    removedup(arr,&n);
    printf("array after removing all duplicates:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


