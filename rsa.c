#include "factor.h"

/**
 * main - The main function for factorization.
 *
 * Author: Thaoban Abdrasheed
 * Return: Always returns 0.
 */
int main(int argc, char *argv[])
{
    FILE *fptr;
    size_t count;
    ssize_t line;
    char *buffer = NULL;

    // Check for correct usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Open the file for reading
    fptr = fopen(argv[1], "r");
    if (fptr == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    // Read and factorize each line in the file
    while ((line = getline(&buffer, &count, fptr)) != -1)
    {
        factorize(buffer);
    }

    // Clean up and close the file
    fclose(fptr);
    if (buffer)
        free(buffer);

    return (0);
}
