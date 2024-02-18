#include "sort.h"

/**
 * partition - dividing the array to sort to 2 parts.
 * @array: the array needed to be sorted.
 * @low: the first element of the array.
 * @high: the last element of the array.
 * 
 * Return: the pivot to iterate between elements of the array.
*/
size_t partition(int *array, size_t low, size_t high)
{
	size_t i = 0, pivot = array[low], left = low;
	int temp;

	i = low + 1;
	while (i <= high)
	{
		if (array[i] < pivot)
		{
			temp = array[i];
			array[i] = array[left];
			array[left] = temp;
			left++;
		}
		i++;
	}
	temp = pivot;
	pivot = array[left];
	array[left] = pivot;

	return (left);
	
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
	
}