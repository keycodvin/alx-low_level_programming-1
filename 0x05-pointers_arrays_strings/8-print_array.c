#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the arrays
 *@a: pointer to array
 *@n: number of elements of array
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(",");
printf(" ");
}
i++;
}
printf("\n");
}
