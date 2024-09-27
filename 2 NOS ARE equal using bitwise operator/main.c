// C Program for checking numbers
// are equal using bitwise operator
#include <stdio.h>

int main()
{
    int x = 1;
    int y = 2;

    // Using XOR
    // XOR of two equal numbers is 0
    if (!(x ^ y))
        printf(" %d is equal to %d ", x, y);
    else
        printf(" %d is not equal to %d ", x, y);

    return 0;
}
