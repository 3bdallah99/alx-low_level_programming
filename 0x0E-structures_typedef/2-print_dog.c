#include "dog.h"
/**
 * print_dog - a function to 
 * @d: pointer to structur
 * Return: void
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: %s\n", "(nil)");
else
printf("Name: %s\n", d->name);

printf("Age: %.6f\n", d->age);

if (d->owner == NULL)
printf("Owner: %s\n", "(nil)");
else
printf("Owner: %s\n", d->owner);
}
