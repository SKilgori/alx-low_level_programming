#include "main.h"


/**
 *
 * main - check the code for Holberton School students.
 *
 * 
 *
 * Return: Always 0.
 *
 */

int main(void)

{

		print_to_98(98);

			return (0);

}
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
