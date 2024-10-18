#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string colors[5];
    for (int i = 0; i < 5; i++) //This loop asks the user for a color and stores it in an array.
    {
        colors[i] = get_string("Color: ");
    }
    for (int i = 0; i < 5; i++) //This loop prints the colors that the user put in, and the i + 1 makes the loop start at 1. colors[i] calls the array.
    {
        printf("Array position %i contains %s\n", i + 1, colors[i]);
    }
}
