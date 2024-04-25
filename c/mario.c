#include <stdio.h>
#include <cs50.h>
int get_size(void);
void print_grid(int max_x, int max_y);
void space();

// test
int main(void)
{
    // line
    printf("LINE\n");
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");

    // space
    space();

    // column
    printf("COLUMN\n");
    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
    
    // space
    space();

    // grid
    printf("GRID\n");
    
    int max_x = get_size();
    int max_y = get_size();
    
    print_grid(max_x, max_y);

    // space
    space();

    // square
    printf("SQUARE\n");
    const int i = 7;
    print_grid(i, i);
}

int get_size(void)
{
    int i;
    do 
    {
        i = get_int("size: ");
    }
    while (i < 1);

    return i;
}

void print_grid(int max_x, int max_y)
{
    for (int y = 0; y < max_y; y++)
    {
        for (int x = 0; x < max_x; x++)
            {
                printf("# ");
            }
        printf("\n");
    }
}

void space()
{
    printf("\n");
    printf("\n");
    printf("\n");
}