#include <stdio.h>

int fibo(const int n) {
    if(n == 0) return 0;
    else if(n == 1) return 1;

    int result[n];
    result[0] = 0;
    result[1] = 1;

    for(int i = 2; i < n; i++) 
    {
        result[i] = result[i - 1] + result[i - 2];
    }

    return result[n - 1] + result[n - 2];
}