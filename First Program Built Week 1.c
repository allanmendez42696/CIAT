#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("\nSolve 5+7 , 5-7 , 5*7 , and 7/5: ");
   int iOperand1 = 0;
   int iOperand2 = 0;

   printf ("\nEnter first Number: ");
   scanf ("%d", &iOperand1);

   printf( "\nEnter second number: ");
   scanf("%d", &iOperand2);
   // used the notes provided in class for printf, so that the user is instructed to place those integers.

   int output;
    int minOutput;
    int multOutput;
    float divOutput;
    float remOutput;
// declared the following variables so that when creating a problem, the system knows what each variable represents,
// and whether the output of the equation is a integer or decimal.
   output = iOperand1 + iOperand2;
    minOutput = iOperand2 - iOperand1;
    multOutput = iOperand1 * iOperand2;
    divOutput = iOperand2 / iOperand1;
    remOutput = iOperand2 % iOperand1;

    printf("The output of the sum is : %d, and the output of the difference is %d\n", output, minOutput);
    printf("The output of the multiplication is : %d, and the output of the division is :%f\n", multOutput, divOutput);
    printf("And the remainder is :%f\n", remOutput);
    printf("\n");
    //declared and stated that the answer/ output for the equations will consist of integers for the sum, difference, and Mult,
    // and used the float/ for division and remainder.
   return 0;
}
