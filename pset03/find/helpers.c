/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
 
bool search(int value, int values[], int n)
{
    // Binary search
    int start = 0;
    int end = n -1 ;
    
    while (end >= start)
    {
        int mid = (start + end) / 2;
        if (values[mid] == value)
        {
            return true;
        }
        else if (values[mid] > value)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    ;
    return false;
}

bool linear_search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (n < 0)
    {
        return false;
    }
    for (int i = 0; i < n; i++)
    {
        if (values[i] == value)
        {
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int swap;
    // Goes through each index
    for (int i = 0; i < n; i++)
    {
        // Find and store the index of smaller value to the right of index n. 
        int smaller = i;
        for (int j = i + 1; j < n; j++)
        {
            if (values[smaller] > values[j])
            {
                smaller = j;
            }
        }
        // Swap value[smaller] and values[i]
        // printf("%i ", values[smaller]);
        swap = values[smaller];
        values[smaller] = values[i];
        values[i] = swap;
    }
    // printf("\n");
}

// int main()
// {
//     int sd[8] = {3, 2, 1, 4, 231, 45, 62, 9};
//     sort(sd, 8);
//     printf("%d\n",search(23, sd, 8));
// }