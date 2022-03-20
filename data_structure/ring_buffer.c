#define N 5 

int array[N] = {0};
int ptr_begin = N - 1;
int ptr_end = 0;

void push(int value)
{
    if(ptr_end == ptr_begin) ptr_begin++;

    if(ptr_end == N) ptr_end = 0;

    array[ptr_end] = value;

    ptr_end++;
}

void pop()
{
    if(ptr_begin >= N) ptr_begin = 0;

    array[ptr_begin] = 0;
    ptr_begin++;
}