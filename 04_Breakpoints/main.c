#include <stdio.h>

void	bar(int i)
{
    if (i == 963)
    {
        printf("Heya\n");
    }
    return ;
}

void	foo()
{
    for (int i = 0; i < 1000; i++)
        bar(i);
    return ;
}
    // If you want a reakpoint on bar, but only when i == 963
    // Try using: b bar if i == 963

int	main(void)
{
    foo();
    return (0);
}
    // Create a breakpoint at foo so you dont have to go though main
