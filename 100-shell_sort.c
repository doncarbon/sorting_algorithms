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
	size_t i, j, gap = 1;
	int temp;

	while (gap < size / 3)
        gap = gap * 3 + 1;
	
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap = gap / 3;
	}
}
