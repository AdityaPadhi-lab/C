// C Program to print
// Pascal's Triangle
#include <stdio.h>

int main()
{
    int n = 5;
    
      
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        int x = 1;

        for (int j = 1; j <= i; j++) {
            printf("%d   ", x);
            x = x * (i - j) / j;
        }
        printf("\n");
    }

    return 0;
}
