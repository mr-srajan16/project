#include<stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() 
{
    char operation;
    double num1, num2;
    
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
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2,  add(num1, num2));
            break;
        case 'b':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2,  sub(num1, num2));
            break;
        case 'c':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2,  mul(num1, num2));
            break;
        case 'd':
            if (num2 != 0.0) 
            {
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2,  div(num1, num2));
            } 
    
            else 
            {
            printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }
}



double add(double a, double b) 
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double mul(double a, double b) 
{
    return a * b;
}

double divide(double a, double b) 
{
    return a / b;
}
