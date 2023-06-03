#include <stdio.h>
#include "cs50.h"

int main(void) {
// {
//     string first = get_string("What's your first name ? ");
//     string last = get_string("What's your last name? ");
//     printf("hello, %s %s\n", first, last);
// }
// int x = 5;
// int y = 7;

// if (x < y) 
// {
//  printf("x is less than y\n");
// }
// else if (x > y)
// {
//  printf("x is greater than y\n");
// }
// else
// {
//  printf("x is equal to y\n");
// }
// }

char c = get_char("Do you agree? ");

if (c == 'y' || c == 'Y')
{
    printf("Agreed.\n");
}
else if (c == 'n' || c == 'N')
{
    printf("Not agreed.\n");
}
}