#include <stdio.h>
#include "main.h"

void	bar()
{

    printf("Hello world\n");
}


void	foo()
{
    func1();
}

int	main(void)
{
    foo();
    bar();
    return (0);
}
    // Set a breakpoint on the func: func5()
