#include "sort.h"

void main()
{
    int i, j, k, size, temp;
    int array[10] = {4, 2, 7, 3, 1, 9, 6, 0, 8, 5};

    size = sizeof(array) / sizeof(array[0]);

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    display(array, size);
}