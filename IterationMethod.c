#include <stdio.h>
#include <math.h>
float f(float x)
{
    float ans=x*x*x+x*x-1;
    return ans;
}
float diff_func(float x)
{
    float ans=1.0/sqrt(1.0+x);
    return ans;
}
int main()
{
    float x0, x1, x2, err;
    int it=1;
    printf("Enter the value of x0: ");
    scanf("%f",&x0);
    printf("Enter the allowed of error: ");
    scanf("%f",&err);
     if (diff_func(x0) > 1) {
        printf ("\nError. Try again with another value of x0"); 
        return -1; 
    }
   do
   {
    x1=f(x0);
    printf("Iteration: %d   root: %f\n",it,x1);
    it++;
    x2=f(x1);
    printf("Iteration: %d root: %f\n",it,x2);
    it++;
    x0=x2;
   }while(fabs(x2-x1)>err);
   printf("Real root is: %f",fabs(x2));
   return 0;
}