#include <stdio.h>
#define f(x, y) x+y
int main()
{
    float x0, y0, xn,yn,slope;
    int n;
    printf("Enter the value of x0 and y0: ");
    scanf("%f%f", &x0, &y0);
    printf("Enter the value of xn: ");
    scanf("%f", &xn);
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    float h = (xn - x0) / n;
    printf("\nx0\ty0\tslope\tyn\n");
    for(int i=0; i<n; i++)
    {
       slope=f(x0,y0);
        yn = y0 + h*slope;
        printf("%.4f\t%.4f\t%0.4f\t%.4f\n", x0, y0, slope, yn);
        y0=yn;
        x0=x0+h;
    }
    printf("\nValue of y at x = %0.2f is %0.3f", xn, yn);
}