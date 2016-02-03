#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Height of pyramid: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    for (int i = 0; i < height; i++)
    {
        for (int s = height - 1; s > i; s--)
        {
            printf(" ");
        }
        for (int h = -1; h < i; h++)
        {
            printf("%s", "#");
        }
        printf("#\n" );
    }
}