#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random function 
 * return - intiger
 */

int main(void)
{
	int lon = 2772;
	char r;

	srand(time(NULL));

	while (lon > 90)
	{
		r = (rand() % (90 - 65)) + 65;
		lon = lon - r;
		printf("%c", r);
	}
	printf("%c", lon);

	return (0);
}
