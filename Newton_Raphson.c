#include <stdio.h>
#include <math.h>
float f(float x)
{
    float ans=x*tan(x)-1;
    return ans;
}
float dx(float x)
{
    float res= tan(x)+ x*(1.0/(cos(x)*cos(x)));
    return res ;
}
int main()
{
    printf("Equation = x*tan(x) +1 \n");
    double a , b ;
    int flag = 0 ;
    do
    {
        printf("Enter Range : ") ;
        scanf("%lf%lf",&a,&b) ;
        if(f(a)*f(b)<0)
        {
            flag = 1 ;
            printf("Range is Correct") ;
            double a_err ;
            printf("\nEnter Allowed Error : ");
            scanf("%lf",&a_err);
            int n , i = 0;
            printf("Enter No. of Iterations : ");
            scanf("%d",&n);
            double x0  = (a+b)/2 , x1;
            printf("%lf\n",x0);
            while(i<=n && fabs(f(x0))>a_err)
            {
                x1 = x0 - f(x0)/dx(x0) ;
                printf("x%d = %lf and f(x) = %lf & f'(x) = %lf \n",i+1,x1,f(x0),dx(x0));
                x0 = x1 ;
                i++;
            } 
            //printf("x%d = %lf and f(x) = %lf & f'(x) = %lf \n",i+1,x1,f(x0),dx(x0));
            printf("Roots of Equation x = %lf \n",x0) ; 
        }
        else
        {
            printf("Range is Incorrect \n");
        }
    }while(flag!=1);
    return 0 ;
}