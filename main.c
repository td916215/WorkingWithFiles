#include <stdio.h>
#include <stdlib.h>

void writeToFile(void);
void readFile(void);

int main()
{
    writeToFile();
    readFile();

    return 0;
}

void writeToFile()
{
    FILE *ptr;

    // Attempt to open the file with write capacity.
    ptr = fopen("D:\\Computer Programming\\something.txt", "w");

    if (ptr == NULL)
    {
        // We have a problem.
        printf("Unable to open/write file.");
    }
    else
    {
        printf("Enter an integer: ");
        int num;
        scanf("%d", &num);

        fprintf(ptr,"%d", num);
        fclose(ptr);
    }
}

void readFile()
{
    int num; // Stores contents of file.

    FILE *ptr;

    ptr = fopen("D:\\Computer Programming\\something.txt", "r");

    if (ptr == NULL)
    {
        printf("Unable to open/read file.");
    }
    else
    {
        fscanf(ptr, "%d", &num);

        printf("Contents of the file: %d", num);
        fclose(ptr);
    }
}
