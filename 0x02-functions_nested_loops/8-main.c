#include "main.h"

/**
 * print_square - prints a square of a given size using '#'
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
{
putchar('\n');
return;
}

for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
putchar('#');
}
putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_square(2);
print_square(10);
print_square(0);
return (0);
}
