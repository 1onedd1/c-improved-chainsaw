#define N 100

void sieve_eratosphene(int* array) 
{
    for (int i = 2; i*i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(array[j] % i == 0 && array[j] != i) array[j] = 0;
        }
    }
}