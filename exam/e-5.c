#include<stdio.h>

void swap(int *x,int *y)
{
    int a;
     a   = *x;
    *x   = *y;
    *y   =  a;
}

int main()
{
    int number1,number2;

    printf("Enter value of num1: ");
    scanf("%d",&number1);
    
    printf("Enter value of num2: ");
    scanf("%d",&number2);
    
    swap(&number1,&number2);
    
    printf("after swiping :\n\n");
    printf("value of number 1 : %d",number1);
    printf("\nvalue of number 2 : %d",number2);

}
    