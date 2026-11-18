#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *file;
    char word[256];

    //WRITE MODE
    file = fopen("data.txt", "w");
    if (file == NULL) 
    {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fputs("Line 1: Initial text written using 'w' mode.\n", file);
    fclose(file);


    //APPEND MODE
    file = fopen("data.txt", "a");
    if (file == NULL) 
    {
        printf("Error opening file for appending!\n");
        return 1;
    }
    fputs("Line 2: New text added using 'a' mode.\n", file);
    fclose(file);


    //READ MODE 
    file = fopen("data.txt", "r");
    if (file == NULL) 
    {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("File Contents:\n");
    while (fscanf(file, "%s", word) != EOF) 
    {
        printf("%s ", word); 
    }

    fclose(file);
    return 0;
}
