#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float change;
    int nChange = 0;
    do
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    while (change < 0.0);
    while (change >= .2499)
    {
        nChange += 1;
        change -= .2499;
    }
    while (change >= .0999)
    {
        nChange += 1;
        change -= .0999;
    }
    while (change >= .0499)
    {
        nChange += 1;
        change -= .0499;
    }
    while (change >= .00999)
    {
        nChange += 1;
        change -= .00999;
    }
    printf("%i\n", nChange);
}
