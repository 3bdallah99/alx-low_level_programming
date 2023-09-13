#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - to create a new dog
 * @name: name of a new dog
 * @age: of a new dog
 * @owner: of a new dog
 *
 * Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
char *newname, *newowner;

dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

newname = malloc(sizeof(name) + 1);
if (newname == NULL)
{
free(new_dog);
return (NULL);
}

newowner = malloc(sizeof(owner) + 1);
if (newowner == NULL)
{
free(newname);
free(new_dog);
return (NULL);
}


strcpy(newname, name);
strcpy(newowner, owner);

new_dog->name = newname;
new_dog->owner = newowner;
new_dog->age = age;

return (new_dog);
}
