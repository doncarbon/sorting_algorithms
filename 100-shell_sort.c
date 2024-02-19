#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using
 * the Shell sort algorithm, using the Knuth sequence.
 *
 * @array: array to sort.
 * @size: size of the array to sort.
 * 
 * Return: Nothing (void)
*/
void shell_sort(int *array, size_t size)
{
	size_t i, gap = i * 3;
	int temp;

	while (gap % 2 != 0)
	{
		for (i = 0; gap + 1 < size; i++)
		{
			if (array[i + 1] > array[gap + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[gap + 1];
				array[gap + 1] = temp;
			}
		}
		gap = gap / 2;
		print_array(array, size);
	}
}