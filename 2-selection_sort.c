#include "sort.h"
/**
 * selection_sort - A function that sorts an array of integers in
 * ascending order using selection sort algo
 *
 * @array: Array of integers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, temp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				print_array(array, size);
			}
		}
		temp = array[min];
		array[min] = array[i];
		array[i] = temp;
	}
}
