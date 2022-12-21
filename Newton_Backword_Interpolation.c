#include <stdio.h>
#include <math.h>
int main()
{
    float x, u1, u, y, fact;
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    float a[n][n + 1];
    printf("Enter Values of X\n");
    for (int i = 0; i < n; i++)
        scanf("%f", &a[i][0]);
    printf("Enter Values of Y\n");
    for (int i = 0; i < n; i++)
        scanf("%f", &a[i][1]);
    printf("Enter value of x for which you want y\n");
    scanf("%f", &x);
    // Find the difference table
    for (int j = 2; j < n + 1; j++)
    {
        for (int i = 0; i < n - j + 1; i++)
        {
            a[i][j] = a[i + 1][j - 1] - a[i][j - 1];
        }
    }
    printf("The Difference Table is as follows: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i; j++)
            printf("%.3f  ", a[i][j]);
        printf("\n");
    }
    // find u
    u = (x - a[n-1][0]) / (a[1][0] - a[0][0]);
    // Initial y, u1,k
    y = a[n-1][1];
    u1 = u;
    fact = 1;
    int j=2;   //corresponding to column number.
    for (int i = n-2; i>=0; i--)
    {
        y = y + (u1 * a[i][j]) / fact;
        // update fact ,u1;
        fact *= i;
        u1 = (u1 * (u + (j - 1)));
        j++;
    }
    printf("\n\nValue at x=%f is = %f", x, y);
}