#include "main.h"

/**
 * _isalpha - checks if character is alphabetic
 *@c: character to be checked
 * Return: 1 (success) if alphabetic, 0 is returned when otherwise.
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
