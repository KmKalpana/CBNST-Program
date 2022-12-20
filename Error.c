#include <stdio.h>
#include <math.h>
int main()
{
    float true_value, approx_value, absoluteError, relativeError, PercentageError;
    printf("Enter the true value and approx value: ");
    scanf("%f%f", &true_value, &approx_value);
    absoluteError=fabs(true_value-approx_value);
    relativeError=fabs(absoluteError/true_value);
    PercentageError=relativeError*100;
    printf("Absolute Error is: %f\n",absoluteError);
    printf("Relative Error is: %f\n",relativeError);
    printf("Percentage Error is: %f\n",PercentageError);
}