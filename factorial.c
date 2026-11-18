#include <stdio.h>
int main() 
{
    int n, i;
    double fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } 
    else 
    {
        i = n;
        while (i > 0) 
        {
            fact *= i;
            i--;
        }
        printf("Factorial of %d = %lf\n", n, fact);
    }
}
