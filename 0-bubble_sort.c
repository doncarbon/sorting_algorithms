#include "sort.h"

/**
 * bubble_sort - sorts an array of ints in ascending order using Bubble sort.
 * @array: array to sort.
 * @size: size of the array to sort.
 *
 * Return: Nothing (void).
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 1; i <= size - 1; i++)
	{
		for (j = 0; j <= size - 2; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
