#ifndef SORT_HEADER
#define SORT_HEADER

#include <stdio.h>
#include <stdlib.h>

int swapInt(int *array, int x, int y)
{
    int temp = array[x];
    array[x] = array[y];
    array[y] = temp;
}

int display(int *array, int size)
{
    int i = 0;

    while (array && i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
}
#endif