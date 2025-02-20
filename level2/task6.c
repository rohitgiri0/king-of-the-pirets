// A struct allows multiple members to exist simultaneously, each with its own separate memory.

// #include <stdio.h>
// typedef struct{
//     int rollno;
//     char name[50];
//     float marks;
// }student;
//     int main(){
//     student st1;
//     printf("enter roll no : ");
//     scanf("%d",&st1.rollno);
//     printf("enter name : ");
//     scanf(" %[^\n]",st1.name);
//     printf("enter marsk : ");
//     scanf("%f",&st1.marks);
//     printf("the details of student:\n");
//     printf("roll no: %d\n",st1.rollno);
//     printf("name: %s\n",st1.name);
//     printf("marks: %.2f\n",st1.marks);

// return 0;
// }

// A union allows storing only one member's value at a time, and all members share the same memory space.

// #include <stdio.h>

// typedef union {
//     int rollNo;
//     char name[50];
//     float marks;
// } Student;

// int main() {
//     Student s1;

//     printf("Enter Roll Number: ");
//     scanf("%d", &s1.rollNo);
//     printf("Roll Number: %d\n", s1.rollNo);

//     printf("\nEnter Name: ");
//     scanf(" %[^\n]", s1.name);
//     printf("Name: %s\n", s1.name);

//     printf("\nEnter Marks: ");
//     scanf("%f", &s1.marks);
//     printf("Marks: %.2f\n", s1.marks);

//     return 0;
// }


/*The goto statement in C is used to transfer control to a labeled statement within the same function.
It can be useful in certain cases like breaking out of nested loops, error handling,
or jumping to a specific part of the program. However, overusing goto can make code harder to read and maintain,
so it should be used cautiously*/

// #include <stdio.h>

//     int main(){
//         int n;
//     retry:
//     printf("enter a positive number: ");
//     scanf("%d",&n);
//     if(n<=0){
//         printf("enter a valid positive number!\n");
//         goto retry;
//     }
//     printf("thanks\n");
// return 0;
// }


// do while loop example

// #include <stdio.h>

//     int main(){
//         int n;
//         printf("enter the limit:");
//         scanf("%d",&n);
//         int i=1;
//         do{
//             printf("%d\n",i);
//             i++;
//         }while(i<n);
// return 0;
// }


// factorial fibonacci switch case toh aata hi hai (ni aata tohh dhuddd thara majnaa me)


// infinite loop

// #include <stdio.h>

//     int main(){
//     while(1){
//         int i=0;
//         printf("%d\n",i);
//         i++;
//     }
// return 0;
// }

// use of continue and break


// #include <stdio.h>

// int main() {
//     printf("Printing 1 to 10 and skipping 7\n");

//     for (int i = 1; i <= 100; i++) {
//         if (i == 7) {
//             continue;  // Skips printing 7
//         }
//         if(i>10){
//             break;
//         }
//         printf("%d\n", i);
//     }

//     return 0;
// }


// function call by value

// #include <stdio.h>
// void swap(int a ,int b){
//     int temp=a;
//     a=b; 
//     b=temp;
// }
//     int main(){
//     int a=5; 
//     int b=10;
//     swap(a,b);
//     printf("the value of a : %d \n",a);
//     printf("the value of b: %d \n",b);
//     // no swap bcoz we passed the copy of a and b
// return 0;
// }


// function call by reference

// #include <stdio.h>
// void swap(int *a ,int *b){
//     int temp=*a;
//     *a=*b; 
//     *b=temp;
// }
//     int main(){
//     int a=5; 
//     int b=10;
//     swap(&a,&b);
//     printf("the value of a :%d \n",a);
//     printf("the value of b:%d \n",b);
//     // swap bcoz we passed the actual address of a and b
// return 0;
// }

