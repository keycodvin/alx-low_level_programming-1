#include <stdio.h>
/**
 *main - Entry point
 *Return: ALways 0(success)
 */
int main(void)
{
char a = 'a';
while (a >= 'z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
