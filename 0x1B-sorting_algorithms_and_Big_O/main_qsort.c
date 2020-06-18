#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

/**
 * comparator - function that compares for qsort
 * @p1:
 * @p2:`
 * Return: int
 */
int comparator (const void * p1, const void * p2)
{
    int x, y;
    x = *(int*)p1;
    y = *(int*)p2;

    if (x < y)
        return -1;
    if (x == y)
        return (0);
    return (1);
}


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {100, 93, 40, 57, 14, 58, 85, 54, 31, 56, 46, 39, 15, 26, 78, 13};
	int size_array = sizeof(array) / sizeof(int);

    print_array(array, size_array);
    printf("------\n");
    qsort(array, size_array, sizeof(int), &comparator);
    print_array(array, size_array);

	return (0);
}