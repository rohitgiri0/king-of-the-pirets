// fibonacci series

#include<stdio.h>

//fibonacci series without recursion - iteration
int fibonacci(int num){
    int a=0;
    int b=1;
    int i,next;
    printf("%d,%d,",a,b);
    for(i=2; i<num; i++){
        next = a+b;
        printf("%d,",next);
        a=b;
        b=next;
    }  
    return next;
}

//fibonacci series with recursion
int series(int number){

    if(number == 0){
        return 0;
    } else if ( number ==1){
        return 1;
    } else{
        return series(number - 1) + series(number - 2);
    } 
}

int main(){

    int number,num,i;

    printf("Enter a value:");
    scanf("%d",&num);

    number=num;

    printf("Fibonacci Series without recursion:\n");
    fibonacci(num);

    printf("\n");

    printf("Fibonacci Series with recursion:\n");
    for(i=0; i<number; i++){
        printf("%d,",series(i));
    }

    return 0; 
}