#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name?\n");
    string number = get_string("What's your number?\n");
    printf("hello @%s, %s! \n", number, name);
    printf('You get 100%%!');
}