// swap elements without third element
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    a=a+b; //40+20=60
    b=a-b; //60-20=40
    a=a-b; //60-40 = 20
    printf("Value of a after swapping: %d\n",a);
    printf("Value of b after swapping: %d\n",b);
    printf("\n");
    //swap elements with third variable
    int x=30,y=10,temp;
    temp=x;
    x=y;
    y=temp;
    printf("Value of x(30) after swapping: %d\n",x);
    printf("Value of y(10) after swapping: %d\n",y);

    return 0;
}



