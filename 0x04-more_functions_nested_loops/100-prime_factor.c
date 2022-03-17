#include <main.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long prime = 612852475143;
	long quotient = prime;
	long divisor = 2;

	while (quotient != divisor)
	{
		if (quotient % divisor == 0)
		{
			quotient = quotient / divisor;
		}
		else
		{
			divisor++;
		}
	}

	printf("%li\n", quotient);

	return (0);
}
