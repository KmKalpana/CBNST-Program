#include<stdio.h>
#include<math.h>

float fx(float x)
{
   return((3*x)+sin(x)-exp(x));
}

int main()
{
   printf("For Equation: 3x+sin(x)-e^x \n");
   float a,b,er;
   int it=1;
   printf("Enter the values of a and b: \n");
   scanf("%f %f", &a, &b);
   if(fx(a)*fx(b)<0)
   {
      
      printf("Enter the allowed error: ");
      scanf("%f",&er);
      float x= a-((b-a)/(fx(b)-fx(a)))*fx(a);
      while(fabs(fx(x))>er)
      {
        x= a-((b-a)/(fx(b)-fx(a)))*fx(a);
        printf("Iteration No: %d a: %f    b: %f   x: %f   fx: %f \n",it,a,b,x,fx(x));
        if(fabs(fx(x))<er)
           printf(" Real Root is : %f",x);
        else if(fx(a)*fx(x)<0)
           b=x;
        else if(fx(x)*fx(b)<0)
           a=x;
        it++;
      }
   }
   else
   {
     printf("Wrong Intervall try again!! \n");
   }
   return 0;
 }