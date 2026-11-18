#include <stdio.h>
int main() 
{
    int a,b,extra;

    printf("Enter first integer value: \n");
    scanf("%d", &a);
    printf("Enter second integer value: \n");
    scanf("%d", &b);

    printf("~~~~~ Before Swapping ~~~~~\n");
    printf("a = %d, b = %d\n", a, b);

    extra = a;
    a = b;
    b = extra;

    printf("\n~~~~~ After Swapping(using third variable) ~~~~~\n");
    printf("a = %d, b = %d\n", a, b);

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("\n~~~~~ After Swapping Again(Without Third Variable) ~~~~~\n");
    printf("a = %d, b = %d\n", a, b);

}
