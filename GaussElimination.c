#include <stdio.h>
#include <math.h>
int main()
{
    float a[20][20], x[10], sum = 0.0;
    printf("Enter the order of matrix: ");
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n + 1); j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
        {
            if (i > j)
            {
                float c = a[i][j] / a[j][j];
                for (int k = 1; k <= n + 1; k++)
                    a[i][k] = a[i][k] - c * a[j][k];
            }
        }
    }
    x[n] = a[n][n + 1] / a[n][n];
    for (int i = n - 1; i > 0; i--)
    {
        sum = 0.0;
        for (int j = i + 1; j <= n; j++)
            sum = sum + a[i][j] * x[j];
        x[i] = (a[i][n + 1] - sum) / a[i][i];
    }
    // Print the matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%0.2f ", a[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<=n; i++)
    {
     printf("\nx%d=%f\t",i,x[i]);
    }
    return 0;
}