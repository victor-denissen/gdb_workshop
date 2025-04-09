#include <stdio.h>
void	bar()
{
    for (int i = 0; i < 1000;)
        i++;
    printf("Hello world\n");
}
    // We care only about what happens after the loop.
    // There are 2 ways to get past this loop in a timely manner
    // 1. Using until 6 to run until the 6th line
    // 2. Setting a new breakpoint after the loop and continuing the program

void	foo()
{
    for (int i = 0; i < 1000;)
        i++;
    return ;
}
    // Lets say you dont care about this function, use finnish to complete it

int main()
{
    // Lets try going into these functions with s
    foo() ;
    bar();
    return 0;
}
    // Set a breakpoint on main and run
