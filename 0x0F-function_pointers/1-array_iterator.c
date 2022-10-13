#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a param on each element of array
 * @array: Array to execute func on
 * @size: Size of the array
 * @action: This is the pointer to the function to be applied
 * Return: Null void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
