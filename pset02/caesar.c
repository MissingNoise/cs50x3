#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(int argc, string argv[])
{
    int key = 0;
    int k = atoi(argv[1]);
    
    if (argc != 2 || k < 1)
    {
        printf("Warning: use a non-negative integer.\n");
        return 1;
    }
    else
    {
        key = k;
    }
    
    string p = GetString();
    
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (islower(p[i]) && isalpha(p[i]))
        {
            p[i] = (p[i] - 'a' + key) % 26 + 97;
        }
        else if (isupper(p[i]) && isalpha(p[i]))
        {
            p[i] = (p[i] - 'A' + key) % 26 + 65;
        }
        printf("%c", p[i]);
    }
    printf("\n");
    
    return 0;
}