#include "util.h"

void swap(int* fValue, int* sValue)
{
    int temp = *fValue;
    *fValue = *sValue;
    *sValue = temp;
}
