#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0 (success)
 */

void print_alphabet_x10(void) /* this code prints alphabet in roles of 10 */
{

char c;
int i = 0;
  
while (i <= 9)
{
for (c ='a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
