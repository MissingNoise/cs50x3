#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Say something: ");
    string s = GetString();
    
    printf("Say something: ");
    string t = GetString();
    
    //comparing pointers. so will be wrong if you type the same thing!
    if (s == t)
    {
        printf("You typed the same thing.");
    }
    else
    {
        printf("You typed different things.")
    }
}