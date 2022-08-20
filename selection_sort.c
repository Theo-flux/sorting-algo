#include "sort.h"

int locateMin(int *array, int size, int i)
{
    int j = i + 1;
    int min = i;

    while (j < size)
    {
        if (array[j] < array[min])
        {
            min = j;
        }
        j++;
    }

    return min;
}

void selSort(int *array, int size)
{
    int i, min;
    i = 0;

    while (i < size)
    {
        int min = locateMin(array, size, i);

        if (min != i)
        {
            swapInt(array, i, min);
        }

        i++;
    }
}

void main()
{
    int array[9] = {7, 6, 7, 5, 9, 2, 1, 15, 10};
    int size;

    size = sizeof(array) / sizeof(int);
    display(array, size);
    selSort(array, size);
    display(array, size);
}