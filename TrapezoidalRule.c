#include <stdio.h>
int function(int x)
{
    return x*x*x;
}
int main()
{
   int a,b, n;
   printf("Enter the value of a and b: ");
   scanf("%d%d",&a,&b);
   printf("Enter the intervals: ");
   scanf("%d",&n);
   int sum= function(a)+function(b);
    int h=(b-a)/2;
    for(int i=a+h; i<b; i=i+h)
      sum+=2*function(i);
    sum=(h*sum)/2;
    printf("\n Value of Integral is: %d\n",sum);
    return 0;
}