#include <stdio.h>
void	bar()
{
	// We care only about what happens after the loop, try writing until 7 to skip this loop
	for (int i = 0; i < 1000;)
		i++;
	printf("Hello world\n");
}

void	foo()
{
	// Lets say you dont care about this function, use finnish to complete it
	for (int i = 0; i < 1000;)
		i++;
	return ;
}

int main()
{
	// Lets try going into these functions with s
	foo() ;
	bar();
	return 0;
}

