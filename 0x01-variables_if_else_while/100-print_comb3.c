#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, b;

	for (i = 0; i <= 9; i++)
	{
		b++;
			for(j = b; j <= 9; j++)
			{
		/*digito de la izquierda */
			putchar(i + '0');
		/*digito de la derecha */
			putchar(j + '0');
				if(!((i == 8) && (j == 9)))
				{
				putchar(44);
				putchar(32);
				}
			}
	}
	putchar('\n');
	return (0);
}
