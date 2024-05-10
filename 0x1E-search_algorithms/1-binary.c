#include <stdio.h>
#include <math.h>
/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
        size_t left, mid, right;

        if (array == NULL || size == 0)
        {
                return (-1);
        }

        // Print the initial array being searched
        printf("Searching array: ");
        for (size_t i = 0; i < size; i++) 
        {       
                printf("%d ", array[i]);
        }
        printf("\n");

        left = 0;
        right = size - 1;
                                        
        while (left <= right)
        {
                mid = left + (right - left) / 2;
                if (array[mid] == value)
                {
                        return (mid);
                }
                else if (array[mid] < value)
                {
                        // Print the current subarray being searched
                        printf("Searching subarray: ");
                        for (size_t i = mid + 1; i <= right; i++)
                        {
                                printf("%d ", array[i]);
                        }
                        printf("\n");
                        left = mid + 1;
                }
                else
                {
                        // Print the current subarray being searched
                        printf("Searching subarray: ");
                        for (size_t i = left; i <= mid - 1; i++)
                        {
                                printf("%d ", array[i]);
                        }
                        printf("\n");
                        right = mid - 1;
                }
        }
        return -1;
}
