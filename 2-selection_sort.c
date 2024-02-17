#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: array to sort.
 * @size: size of the array to sort.
 * 
 * Return: Nothing (void)
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		temp = array[i];
		for (j = 0; j < size - 2; j++)
		{
			if (temp > array[i + 1])
			{
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}