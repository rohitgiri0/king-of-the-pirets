#include <stdio.h>

int sum(int arr[], int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum =sum+ arr[i];
    }
    return sum;
}

int max(int arr[], int size) {
    int biggest = arr[0];
    for (int i=1; i<size; i++) {
        if (arr[i]>biggest) {
            biggest = arr[i];
        }
    }
    return biggest;
}

int min(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

float avg(int arr[],int size) {
    int summ =sum(arr,size); 
    float average = (float)summ/size;
    return average;
}

int main() {
    int n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of your array :\n");
    
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    
    printf("Your created array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d element is: %d\n", i + 1, arr[i]);
    }
    
    printf("The sum is: %d\n", sum(arr,n));
    printf("The min is: %d\n", min(arr,n));
    printf("The max is: %d\n", max(arr,n));
    printf("The average is: %.2f\n", avg(arr,n));

    return 0;
}



