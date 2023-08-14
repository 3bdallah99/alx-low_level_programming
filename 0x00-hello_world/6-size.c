#include <stdio.h>
/**
 * main - main func
 * Description: app can find size of almost numirce data type
 * Return: will return 0 if succesd
 */
int main(void)
{
char c;
int i;
long int l;
long long int ll;
float f;
printf("Size of a char: %lu bytes.\n", sizeof(c));
printf("Size of an int: %lu bytes.\n", sizeof(i));
printf("Size of a long int: %lu bytes.\n", sizeof(l));
printf("Size of a long long int: %lu bytes.\n", sizeof(ll));
printf("Size of a float: %lu bytes.\n", sizeof(f));

return (0);
}
