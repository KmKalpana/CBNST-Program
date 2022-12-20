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
    int count = 1;
    int h = (b - a) / n;
    for (int i = a + h; i < b; i = i + h)
    {
        if (count%3==0)
        {
            sum += 2 * function(i);
            count++;
        }
        else
        {
            sum += 3 * function(i);
            count++;
        }
    }
    float ans = 0.0;
    ans = (3* h) / 8 *sum ;
    printf("\n Value of Integral is: %d\n", ans);
    return 0;
}