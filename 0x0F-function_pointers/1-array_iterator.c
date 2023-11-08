#include "function_pointers.h"
/**
* array_iterator-itterates over an array
* @array:accepts an array
* @size:size of array
* @action:function to execute
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	if (array != NULL && action != NULL)
	{
		action(array[i]);
	}
	}
}
