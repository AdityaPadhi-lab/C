// C Program for
// Replacing 0 to 1
#include <math.h>
#include <stdio.h>

int main()
{
    int N = 102301;

    int ans = 0;
    int i = 0;
    while (N != 0) {
        // Condition to change value
        if (N % 10 == 0)
            ans = ans + 1 * pow(10, i);
        else
            ans = ans + (N % 10) * pow(10, i);

        N = N / 10;
        i++;
    }

    printf("%d", ans);

    return 0;
}
