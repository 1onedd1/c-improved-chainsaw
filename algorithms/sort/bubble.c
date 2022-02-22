#include "bubble.h"

void bubble_sort(int* array, int length) 
{
    printf("%d\n", array[0]);

    for(int i = 0; i < length; i++) 
    {
        for(int j = 1; j < length - i; j++)
        {
            int* first_item = array + j - 1;
            int* second_item = array + j;

            if(*first_item < *second_item)
            {
                int temp = *first_item;
                *first_item = *second_item;
                *second_item = temp;
            }
        }
    }
}