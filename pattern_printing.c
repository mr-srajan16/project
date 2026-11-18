#include<stdio.h>
int main() 
{
    int rows, i, j;

    printf("Enter the number of rows for the triangle pattern: ");
    scanf("%d", &rows);

    printf("\n~~~~~Right-Angled Triangle Pattern~~~~~\n");
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n"); 
    }
}
