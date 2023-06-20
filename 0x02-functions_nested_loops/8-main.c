#include "main.h"
#include <stdio.h>


void print_square(int size)
{
int i, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
printf("#");
}
printf("\n");
}
}
else
{
printf("\n");

}
}
