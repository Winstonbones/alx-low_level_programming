#include <stdlib.h>
/**
 * **malloc_checked  a function that  allocates memory using malloc
 * @b: input value 
 *Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
