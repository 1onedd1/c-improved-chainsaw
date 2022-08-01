#include "sort.h"
#include "../../util/util.h"
#include "stdio.h"

void coctail_sort(int* array, int length)
{
    for(int i = 0; i < length; i++)
    {
        for(int j = 1 + i; j < length - i; j++)
        {
            int* first_item = array + j - 1;
            int* second_item = array + j;

            if(*first_item < *second_item)
            {
                swap(first_item, second_item);
            }
        }

        for(int j = length - 1 - i; j > 0 + i; j--)
        {
            int* first_item = array + j - 1;
            int* second_item = array + j;

            if(*first_item < *second_item)
            {
                swap(first_item, second_item);
            }
        }
    }
}

void bubble_sort(int* array, int length)
{
    for(int i = 0; i < length; i++)
    {
        for(int j = 1; j < length - i; j++)
        {
            int* first_item = array + j - 1;
            int* second_item = array + j;

            if(*first_item < *second_item)
            {
                swap(first_item, second_item);
            }
        }
    }
}
