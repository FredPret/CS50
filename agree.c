#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree?\n");
    
    if (c == 'y' || c == 'Y') 
    {
        printf("Agreed\n");
    } 
    else 
    {
        printf("Not agreed\n");
    }
}