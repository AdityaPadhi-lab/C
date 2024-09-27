// C Program for
// Checking Palindrome
#include <stdio.h>

// Checking if the number is
// Palindrome number
void check_palindrome(int N)
{
    int T = N;
    int rev = 0; // This variable stored reversed digit

    // Execute a while loop to reverse digits of given
    // number
    while (T != 0) {
        rev = rev * 10 + T % 10;
        T = T / 10;
    }

    // Compare original_number with reversed number
    if (rev == N)
        printf("%d is palindrome\n", N);
    else
        printf("%d is not a palindrome\n", N);
}

int main()
{
    int N = 13431;
    int M = 12345;

    // Function call
    check_palindrome(N);
    check_palindrome(M);

    return 0;
}
