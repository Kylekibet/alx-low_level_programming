#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: always 0(success)
 */
int main(void)
{
	int x, y, z;

	x = 0;
	while (x < 8)
	{
		y = x + 1;
		while (y < 9)
		{
			z = y + 1;
			while (z < 10)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 7)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
