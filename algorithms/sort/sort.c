#include "sort.h"
#include "../../util/util.h"

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

void quick_sort(int* array, int start, int end)
{
    int pivot = array[(start + end) / 2];
    int begin = start;
    int finish = end;

    if(start < end)
    {
        while(1)
        {
            while(array[begin] < pivot) begin++;
            while(array[finish] > pivot) finish--;

            if(begin >= finish)
            {
                pivot = finish;
                break;
            }

            swap(&(array[begin]), &(array[finish]));
            begin++;
            finish--;
        }

        quick_sort(array, start, pivot);
        quick_sort(array, pivot + 1, end);
    }
}
