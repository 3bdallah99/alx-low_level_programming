#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int t, u, add = 0;
for (t = 1; t < argc; t++)
{
for (u = 0; argv[t][u] != '\0'; u++)
{
if (!isdigit(argv[t][u]))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[t]);
}
printf("%d\n", add);
return (0);
}
