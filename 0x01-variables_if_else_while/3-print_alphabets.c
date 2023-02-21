#include <stdio.h>

/**
<<<<<<< HEAD
 *  * main - Entry point
 *   * program that prints the alphabet in lowercase and then in uppercase
 *    * Return: 0 (success)  
*/

int main(void)
{	char al = 'a', AL = 'A';

for (al = 'a'; al <= 'z'; al++)
{	putchar(al);
}
for (AL = 'A'; AL <= 'Z'; AL++)
{	putchar(AL);
}
putchar('\n');
return (0);

=======
 * main - Entry point
 * program that prints the alphabet in lowercase and then in uppercase
 * Return: 0 (success)
 */
int main(void)
{	char al = 'a', AL = 'A';

	for (al = 'a'; al <= 'z'; al++)
	{	putchar(al);
	}
	for (AL = 'A'; AL <= 'Z'; AL++)
	{	putchar(AL);
	}
	putchar('\n');
	return (0);
>>>>>>> 945f117717c8339b6da9fb76af56e48daf0da7f3
}
