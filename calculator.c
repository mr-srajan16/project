#include <stdio.h>
int main() 
{
    char operation;
    double num1, num2, result;
    
    printf("For addition, enter a\n");
    printf("For subtraction, enter b\n");
    printf("For multiplication, enter c\n");
    printf("For division, enter d\n");

    printf("which operation you want to perform : ");
    scanf(" %c", &operation);

    printf("Enter first numbers: ");
    scanf("%lf", &num1);

    printf("Enter second numbers: ");
    scanf("%lf", &num2);

    switch (operation) 
    {
        case 'a':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 'b':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 'c':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 'd':
            if (num2 != 0.0) 
            {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } 
    
            else 
            {
            printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
