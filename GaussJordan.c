#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   printf("Enter the order of matrix: ");
   scanf("%d",&n);
   float a[20][20], x[10], sum=0.0;
   for(int i=1; i<=n; i++)
   {
      for(int j=1; j<=n+1; j++)
      {
         scanf("%f",&a[i][j]);
      }
   }
   for(int j=1; j<=n; j++)
   {
      for(int i=1; i<=n; i++)
      {
         if(i!=j)
         {
            float c=a[i][j]/a[j][j];
            for(int k=1; k<=n+1; k++)
              a[i][k]=a[i][k]-c*a[j][k];
         }
      }
   }
   // Print the matrix
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= n; j++)
      {
         printf("%0.2f ", a[i][j]);
      }
      printf("\n");
   }
   for(int i=1; i<=n; i++)
   {
      x[i]=a[i][n+1]/a[i][i];
      printf("\nx[%d]: %f",i,x[i]);
   }
   return 0;
}