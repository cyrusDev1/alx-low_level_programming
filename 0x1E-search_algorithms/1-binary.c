#include "search_algos.h"

/**
 * print_array - print array searching
 * @array: is a pointer to the first element of the array to search in
 * @left: first indice of array
 * @right: last indice of array
 * Return: no return
 */

void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		if (left == right)
			printf("%d\n", array[left]);
		else
			printf("%d, ", array[left]);
		left += 1;
	}
}


/**
 * binary_search - searches for a value in an array of
 * integers using the binary_search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;
	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = floor((left + right) / 2);
		print_array(array, left, right);
		if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
