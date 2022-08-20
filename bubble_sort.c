#include "sort.h"

void bubbleSort(int *array, int size)
{
    int i, j;

    i = 0;

    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (array[i] > array[j])
            {
                swapInt(array, i, j);
            }
            j++;
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
    bubbleSort(array, size);
    display(array, size);
}