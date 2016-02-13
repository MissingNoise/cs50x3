#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(int argc, string argv[])
{
    if (argc <= 1 || argv[1] == NULL)
    {
        printf("Warning: Did not have a single command line argument!\n");
        return 1;
    }
    
    int mod = strlen(argv[1]);
    int key[mod];
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Warning: Argument must only contain letters!\n");
            return 1;
        }
    }
    
    for (int i = 0; i < mod; i++)
    {
        key[i] = toupper(argv[1][i]) - 65;
    }
    
    string p = GetString();
    
    for (int i = 0, m = 0, n = strlen(p); i < n; i++)
    {
        if (islower(p[i]) && isalpha(p[i]))
        {
            p[i] = (p[i] - 'a' + key[m % mod]) % 26 + 97;
            m++;
        }
        else if (isupper(p[i]) && isalpha(p[i]))
        {
            p[i] = (p[i] - 'A' + key[m % mod]) % 26 + 65;
            m++;
        }
        printf("%c", p[i]);
    }
    printf("\n");
    
    return 0;
}
