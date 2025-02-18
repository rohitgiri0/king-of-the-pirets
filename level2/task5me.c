#include <stdio.h>

int main() {
    int rows, cols;
    int even=0; 
    int odd=0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols]; // Variable-Length Array (VLA)

    // Taking input
    printf("Enter elements for your array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(arr[i][j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    // Printing the original array
    printf("\n2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        printf("total even numbers in this array are: %d\n",even);
        printf("total odd numbers in this array are: %d\n",odd);

    }

    // Printing transpose of the matrix
    printf("\nPrinting transpose of this matrix:\n");
    for (int j = 0; j < cols; j++) {  
        for (int i = 0; i < rows; i++) {  
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// linear search
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("enter elements:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&array[i]);
//     }
// int find;
// int found=0;
// printf("enter the element to search: ");
// scanf("%d",&find);
// for(int i=0; i<n; i++){
//     if(array[i]==find){
//         printf("yes %d is present in aaray at index :%d",array[i],i+1);
//         found++;
//         break;
//     }
// }
// if(found==0){
//     printf("\nNO there is no element like that :");
// }
//     return 0;
// }


// binary search


// // binary search and bubble sort 

// #include<stdio.h>

// void sort(int array[], int n);
// int b_search(int array[], int n, int key);

// int main() {
//     int n, key;

//     printf("Enter the size of your array: ");
//     scanf("%d", &n);

//     int array[n];
//     printf("Enter the elements of the array: \n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//     }

//     sort(array, n);  // Sort the array first

//     printf("Enter the key to search for: ");
//     scanf("%d", &key);

//     int result = b_search(array, n, key);
//     if (result != -1) {
//         printf("%d is present at index %d\n", key, result);
//     } else {
//         printf("%d is not present in this array!\n", key);
//     }

//     return 0;
// }

// void sort(int array[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - 1 - i; j++) {
//             if (array[j] > array[j + 1]) {
//                 int temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
// }

// int b_search(int array[], int n, int key) {
//     int low = 0, high = n - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (array[mid] == key) {
//             return mid;  // Key found at index mid
//         } else if (array[mid] > key) {
//             high = mid - 1;  // Search the lower half
//         } else {
//             low = mid + 1;  // Search the upper half
//         }
//     }

//     return -1;  // Key not found
// }

