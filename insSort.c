#include "sort.h"

void insertIth(int *array, int size, int i)
{
    int temp = array[i];
    int j = i - 1;

    while (j >= 0 && array[j] > temp)
    {
        array[j + 1] = array[j];
        j--;
    }
    array[j + 1] = temp;
}

void insSort(int *array, int size)
{
    int i = 1;

    while (i < size)
    {
        insertIth(array, size, i);
        i++;
    }
}

void main()
{
    int array[9] = {7, 6, 7, 5, 9, 2, 1, 15, 10};
    int size;

    size = sizeof(array) / sizeof(int);
    display(array, size);
    insSort(array, size);
    display(array, size);
}