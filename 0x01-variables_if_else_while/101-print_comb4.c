#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{	
		
		for (j = 0; j <= 9; j++)
		{
			
			for (k = 0; k <= 9; k++)
			{
				if (j < k && i < j)
				{
					/*digito de la izquierda */
					putchar(i + '0');
					/*digito del medio */
					putchar(j + '0');
					/*digito de la derecha */
					putchar(k + '0');	
				
				if (!((i == 7) && (j == 8) && (k == 9)))
				{
					putchar(44);
					putchar(32);
				}
				}
			}
		}	
	}
	putchar('\n');
	return (0);
}
