#include <stdio.h>
int function(int x)
{
    return x * x * x;
}
int main()
{
    int a, b, n;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    printf("Enter the intervals: ");
    scanf("%d", &n);
    int sum = function(a) + function(b);
    int count=0;
    int h = (b - a) / n;
    for (int i = a + h; i < b; i = i + h)
    {
        if(count==0)
         {
            sum+=h*function(i);
            count=1;
         }
         else{
            sum+=h*function(i);
            count=0;
         }
    }
    float ans=0.0;
       ans=(h*sum)/3;
    printf("\n Value of Integral is: %d\n", ans);
    return 0;
}