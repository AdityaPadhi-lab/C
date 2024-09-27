// C Program to calculate
// Factorial of a number
#include <stdio.h>

// Calculating factorial using iteration
void factorial_iteration(int N)
{
    unsigned long long int ans = 1;
    for (int i = 1; i <= N; i++) {
        ans = ans * i;
    }

    printf("Factorial of %d is %lld\n", N, ans);
}

// Calculating factorial using recursion
int factorial(int N)
{
    if (N == 0)
        return 1;

    // Recursive call
    return N * factorial(N - 1);
}

int main()
{
    int n;
    n = 13;
    factorial_iteration(n);

    n = 9;
    printf("Factorial of %d using recursion:%d\n", n,
           factorial(n));

    return 0;
}
