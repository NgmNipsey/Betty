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
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i <= size - 1; i++)
	{
		action(array[i]);
	}
}
