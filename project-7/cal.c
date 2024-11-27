#include <stdio.h>

	void add();
	void subtract();
	void multiply();
	void divide();		
	void modulus();

int main() 
{
	
    char number;
    
    do 
	{
        printf("\n---- Arithmetic Operations ----\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%)\n");
        printf("q. Quit\n");
        
        printf("------------------------------------\n");
        printf("Enter your number: ");
        scanf(" %c", &number);  
        
        switch (number) 
		{
            case '1':
                add();
                break;
                
            case '2':
                subtract();
                break;
                
            case '3':
                multiply();
                break;
                
            case '4':
                divide();
                break;
                
            case '5':
                modulus();
                break;
                
            case 'q':
                printf("Exiting the program. Goodbye!\n");
                break;
                
            default:
                printf("Invalid number! Please try again\n");
        }
    }
	 while (number != 'q'); 

    return 0;
}

void add() 
{
    int x, y;
    printf("Enter two numbers to addtion: ");
    scanf("%d %d", &x, &y);
    printf("Result: %d + %d = %d\n", x, y, x + y);
}

void subtract() 
{
    int a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d - %d = %d\n", a, b, a - b);
}

void multiply() {
    int x, z;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &x, &z);
    printf("Result: %d * %d = %d\n", x, z, x * z);
}

void divide() {
    int a,b;
    printf("Enter two numbers to divide: ");
    scanf("%d %d", &a, &b);
    if (b != 0) 
	{
        printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Error: Division by zero is not allowed!\n");
    }
}

void modulus() {
    int x, y;
    printf("Enter two numbers to find modulus: ");
    scanf("%d %d", &x, &y);
    if (y != 0) 
	{
        printf("Result: %d %% %d = %d\n", x, y, x % y);
    } else {
        printf("Error: Division by zero is not allowed!\n");
    }
}