#include "main.h"
/**
 *malloc_checked - array for prints a string
 *@b: number of memory
 *Return: pointer to the allocated memory (SUCCESS)
 *98 if insufficient memory was available (FAILURE)
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
