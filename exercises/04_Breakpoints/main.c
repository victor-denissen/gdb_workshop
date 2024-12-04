
void	bar(int i)
{
	return ;
}

void	foo()
{
	for (int i = 0; i < 1000; i++)
		bar(i);
	return ;
}

int	main(void)
{
	foo();
	return (0);
}
