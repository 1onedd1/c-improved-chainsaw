#include <stdio.h>
#include "main.h"

void print_array(int* array, int length);

int main(int argc, const char * argv[]) 
{
	int int_array[] = {2, 5, 1, 5, 6, 1};

	int size = sizeof(int_array) / sizeof(int_array[0]);

	bubble_sort(int_array, size);

	print_array(int_array, size);

	return 0;
}

void print_array(int* array, int length) 
{
	for(int i = 0; i < length; i++) 
	{
		printf("%d, ", *(array + i));
	}
}
