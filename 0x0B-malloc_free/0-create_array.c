#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 * @p:input
 * @c: string of characters
 * Return: 0
 */

char *create_array(unsigned int p, char c)
{

unsigned int i;
char *arr;

if (p == 0)
return (NULL);
arr = (char *)malloc(p * sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0; i < p; i++)
arr[i] = c;
return (arr);
}
