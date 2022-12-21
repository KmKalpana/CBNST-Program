#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    float X[n], Y[n], x, sum = 0.0, term;
    int i, j;
    printf("Enter the values of X\n");
    for (int i = 0; i < n; i++)
        scanf("%f", &X[i]);
    printf("Enter the value of Y\n");
    for (int i = 0; i < n; i++)
        scanf("%f", &Y[i]);
    printf("Enter value of x for which you want y\n");
    scanf("%f", &x);
    for(int i=0; i<n; i++)
    {
        term=1;
        for(j=0; j<n; j++)
        {
            if(i!=j)
              term=term*((x-X[j])/(X[i]-X[j]));
        }
        sum=sum+ term*Y[i];
    }
    printf("\nValue of X=%g is = %f",x,sum);
    return 0;
}