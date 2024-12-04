#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	srand(time(NULL));

	int rand_int = (rand() % 100);

	char rand_str[5];
	for (int i = 0; i < 4; i++)
		rand_str[i] = (rand() % 26) + 65;

	return (0);
}
