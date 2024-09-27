// C Program for
// Checking value is
// Prime or not
#include <stdio.h>

int main()
{
    int N = 91;
    int flag = 0;

    // Iterate from 2 to N/2
    for (int i = 2; i <= N / 2; i++) {

        // If n is divisible by any number between 2 and
        // n/2, it is not prime
        if (N % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Not a Prime Number");
    else
        printf("Is a Prime Number");
    return 0;
}
