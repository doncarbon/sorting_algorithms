#include "sort.h"

/**
 * partition - dividing the array to sort to 2 parts.
 * @array: the array needed to be sorted.
 * @low: the first element of the array.
 * @high: the last element of the array.
 * 
 * Return: the pivot to iterate between elements of the array.
*/
size_t partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low - 1;
	size_t j;
	int temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (i != j)
				print_array(array, size);
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	if ((i + 1) != high)
		print_array(array, size);

	return (i + 1);
}

/**
 * quick_sort_recursive - helper function for recursive quick sort.
 *
 * @array: the array to sort.
 * @low: the low index.
 * @high: the high index.
 * @size: size of the array to print.
 *
 * Return: Nothing (void).
 */
void quick_sort_recursion(int *array, size_t low, size_t high, size_t size)
{
	size_t pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		if (pivot != 0)
			quick_sort_recursion(array, low, pivot - 1, size);
		
		quick_sort_recursion(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 *
 * @array: the array to sort.
 * @size: size of the array to sort.
 *
 * Return: Nothing (void).
*/
void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
        return;

	quick_sort_recursion(array, 0, size - 1, size);
}
