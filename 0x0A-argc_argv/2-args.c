#include <stdio.h>
#include "main.h"
/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int x;
(void)argc;
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
