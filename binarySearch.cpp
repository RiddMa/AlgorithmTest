#include <stdio.h>

int binarySearch(int *source, int length, int target)
{
    int left = 0;
    int right = length - 1;
    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (target == source[middle])
            return middle;
        if (target < source[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }
    return -1;
}