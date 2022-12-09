#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: always 0(success)
 */
int main(void)
{
	int x, y;

	x = 0;
	while (x < 9)
	{
		y = x + 1;
		while (y < 10)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x != 8)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
