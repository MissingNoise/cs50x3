#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = GetString();
    
    // Print the first initial capitalized
    printf("%c", toupper(s[0]));
    
    // Loop and print caplital of first letter after a space
    for (int i = 1; i < strlen(s); i++)
    {
        if(s[i] == ' ')
        {
            printf("%c", toupper(s[i+1]));
        }
    }
    printf("\n");
}