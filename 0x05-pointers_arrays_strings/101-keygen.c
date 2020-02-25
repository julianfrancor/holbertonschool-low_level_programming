#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* main - function
 *
 *
 *
 */

int main() 
{
	int lon = 2772;
	char r;

	srand(time(NULL));

	while (lon > 127)
	{
		r = rand();
		lon = lon - r;
		printf("%c", r);
	}
	printf("%c",lon);

	return 0;
}
