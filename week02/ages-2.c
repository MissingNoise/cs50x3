#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get number of people
    int n;
    do
    {
        printf("Number of people in room: ");
        n = GetInt();
    }
    while (n < 1);
    
    // declare array to store everyone's age
    int age[n];
    // Do stuff
    for (int i = 0; i < n; i++)
    {
        printf("Age of person #%i: ", i + 1);
        age[i] = GetInt();
    }
    printf("Time passes...\n");
    for (int i = 0; i < n; i++)
    {
        printf("A year from now, person #%i will be %i years old.\n", i + 1, age[i] + 1);
    }
}