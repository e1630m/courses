// Addition with int

#include "/home/e1630m/git/courses/edx/harvard-cs50x/cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Perform addition
    printf("%i\n", x + y);
}
