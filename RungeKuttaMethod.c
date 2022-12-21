#include <stdio.h>
float f(float x, float y)
{
 return (y * y - x * x) / (y * y + x * x);
}
int main()
{
   float x0, y0, xn, h, yn, k1, k2 , k3, k4, k;
  printf("Enter the number of x0 and y0: ");
  scanf("%f%f",&x0,&y0);
  printf("Enter the calculation point of xn: ");
  scanf("%f",&xn);
  int n;
  printf("Enter the number of steps: ");
  scanf("%d",&n);
  printf("\nx0\ty0\tyn\n");
  h=(xn-x0)/n;
  for(int i=0; i<n; i++)
  {
     k1=h*f(x0,y0);
     k2=h*f(x0+h/2,y0+k1/2);
     k3=h*f(x0+h/2,y0+k2/2);
     k4=h*f(x0+h,y0+h);
     k=(k1+2*k2+2*k3+k4)/6;
     yn=y0+k;
     printf("%0.4f\t%0.4f\t%0.4f\n", x0, y0, yn);
     x0=x0+h;
     y0=yn;
  }
  printf("\nValue of y at x = %0.2f is %0.3f", xn, yn);
}