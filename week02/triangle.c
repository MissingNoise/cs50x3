#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool valid_triangle(float a, float b, float c);

int main(void)
{
    //ask for 3 real numbers
    
    printf("Give me a real number: ");
    float x = GetFloat();
    printf("Give me another real number: ");
    float y = GetFloat();
    printf("Give me one more real number: ");
    float z = GetFloat();
    
    bool tf = valid_triangle(x, y, z);
    string k = "true";
    
    if (tf == 0)
    {
        k = "false";
    }
    
    printf("Sides with %f, %f and %f is a triangle: ", x, y, z);
    
    for (int i = 0, n = strlen(k); i < n; i++)
    {
        printf("%c", k[i]);
    }
    printf("\n");
    
}

// checks if each 2 side is larger than another side and returns 0(false) or 1(true) 
bool valid_triangle(float a, float b, float c)
{
    return (a + b > c && a + c > b && b + c > a);
}