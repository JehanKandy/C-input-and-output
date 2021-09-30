// C program to show input and output
#include <stdio.h>
int main()
{
    // Declare the variables
    float num1, num2 ;
    char ch;
    float f;
    // --- Integer ---
    // Input the integer
    printf("Enter the integer: ");
    scanf("%f", &num1);

    printf("Enter the integer: ");
    scanf("%f", &num2);
    // Output the integer
    printf("\nAnswer is: %f", num1 + num2);
    // --- Float ---
   // Input the float
    printf("\n\nEnter the float: ");
    scanf("%f", &f);
    // Output the float
    printf("\nEntered float is: %f", f);
    return 0;
}
