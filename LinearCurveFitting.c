#include <stdio.h>
#include <math.h>
// y=a+bx
int main()
{
    int n, i, x[10], y[10];
    printf("Enter the value of terms: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    for (int i = 0; i <= n - 1; i++)
        scanf("%d", &x[n]);
    printf("Enter the value of y: ");
    for (int i = 0; i <= n - 1; i++)
        scanf("%d", &y[i]);
    int sumx=0, sumy=0, sumx2=0, sumxy=0;
    for(int i=0; i<=n-1; i++)
    {
        sumx = sumx + x[i];
        sumx2 = sumx2 + x[i] * x[i];
        sumy = sumy + y[i];
        sumxy = sumxy + x[i] * y[i];
    }
    float a = ((sumx2 * sumy - sumx * sumxy) * 1.0 / (n * sumx2 - sumx * sumx) * 1.0);
    float b = ((n * sumxy - sumx * sumy) * 1.0 / (n * sumx2 - sumx * sumx) * 1.0);
    printf("\n\nThe line is Y=%3.3f +%3.3f X", a, b);
}