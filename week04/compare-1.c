#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Say something: ");
    char* s = GetString();
    
    printf("Say something: ");
    char* t = GetString();
    
    //comparing pointers. so will be wrong if you type the same thing!
    if (s != NULL && t != NULL)
    {
        if (strcmp(s, t) == 0)
        {
            printf("You typed the same thing.\n");
        }
        else
        {
            printf("You typed different things.\n");
        }
    }
}