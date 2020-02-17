#include <stdio.h>

int main(void)
{
	long i, n1, n2, n3;

	n1 = 1;
	n2 = 0;
	n3 = 0;

	for (i = 0; i <= 50 ; i++)
	{
		n3 = n1 + n2;
		n2 = n1;
		n1 = n3;
		if(i != 50)
		{
			printf("%li, ", n3);
		}
		else
		{
			printf("%li", n3);
		}
	}
	printf("\n");
	return 0;
}
