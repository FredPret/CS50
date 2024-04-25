#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = get_int("how many times should we meow?\n");

    while (i > 0)
    {
        printf("meow\n");
        i--;
    }
}