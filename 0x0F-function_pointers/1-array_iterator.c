#include "function_pointers.h"

/**
 * array_iterator - excutes a functin.
 * @array: array.
 * @size: array size.
 * @action: function pointer.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
