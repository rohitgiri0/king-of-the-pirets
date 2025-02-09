// with a temp variable

#include <stdio.h>
   void swap(int *a,int *b){
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }

    int main(){
    int a,b;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);
    printf("\nthe value of 'a' before swaping: %d",a);
    printf("\nthe value of 'b' before swaping: %d\n",b);
    swap(&a,&b);
    printf("\nthe value of 'a' after swaping: %d",a);
    printf("\nthe value of 'b' after swaping: %d\n",b);
    return 0;
}

// without any temp variable

#include <stdio.h>

    int main(){
        int a,b;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);
    printf("\nthe value of 'a' before swaping: %d",a);
    printf("\nthe value of 'b' before swaping: %d\n",b);
        a=a+b;
        b=a-b;
        a=a-b;
    printf("\nthe value of 'a' after swaping: %d",a);
    printf("\nthe value of 'b' after swaping: %d\n",b);    
return 0;
}
