#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}

for (i = i - i; i >= 0; i--)
{
_putchar (s[i]);
}
_putchar ('\n');
}
