#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>

int main(void)
{
    if (1) {
        if (true) {
            int meow_max = get_int("how many times should we meow?\n");

            int i = 0;
            while (i < meow_max)
            {
                printf("while meow\n");
                i++;
            }

            for (int i = 0; i < meow_max; i++)
            {
                printf("for meow\n");
            }
        }
    }
    
}