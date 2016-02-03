#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int bottles = 12;
    int minutes;
    do
    {
        printf("How many minutes do you shower: ");
        minutes = GetInt();
    }
    while (minutes < 1);
    printf("The equivalent in bottles of water: %i\n", bottles * minutes);
}