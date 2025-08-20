#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
    // Try to print argv[0], this will print the program name
    // If you have given more args through run (eg. run test), try to print argv[1]
    // This should now print test


    // This is to seed the randomness
    srand(time(NULL));

    // Here we will get a random int
    // Try using print rand_int to see what it is
    int rand_int = (rand() % 100);

    // Now we are going to fill in a string with random chars
    // Try using display rand_str
    // This will print rand_str after every action that you do
    char rand_str[5];
    for (int i = 0; i < 4; i++)
        rand_str[i] = (rand() % 26) + 65;

    return (0);
}
