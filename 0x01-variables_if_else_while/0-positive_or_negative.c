
<<<<<<< HEAD
=======
/**
 * main - assigns a random number to int n everytime
 *it executes, and prints it
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

	printf("%d is positive\n", n);

	else if (n == 0)

	printf("%d is zero\n", n);

	else if (n < 0)

	printf("%d is negative\n", n);

	return (0);

}
>>>>>>> f34aa2373188d819756c941d469434dfe9aec702
