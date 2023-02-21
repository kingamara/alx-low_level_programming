#include <unistd.h>

/**
 *_putchar - write the character c to stdout
 *@c: The character to print
 *Return: o success 1.
 *on error, -1 is returened, and errno is set appropriately.
 */

int _putchar(char c)
{
  return(write(1, &c,1));
}
