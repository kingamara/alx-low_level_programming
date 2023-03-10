#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to print
 * Return: length
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; i <= _strlen(src); i++)
{
dest[i] = src[i];
}
return (dest);
}
