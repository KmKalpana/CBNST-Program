#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number of data: ");
    scanf("%d", &n);
    float xy[10][10], matrix[3][4], ratio, a;
    float sum_x = 0, sum_y = 0, sum_x2 = 0, sum_x3 = 0, sum_x4 = 0, sum_xy = 0, sum_x2y = 0;
    printf("Enter the data: \n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < n; j++)
            scanf("%f", &xy[i][j]);
    for(int i=0; i<n; i++)
    {
        sum_x+=xy[0][i];
        sum_y+=xy[1][i];
        sum_x2+=pow(xy[0][i],2);
        sum_x3+=pow(xy[0][i],3);
        sum_x4+=pow(xy[0][i],4);
        sum_xy += xy[0][i] * xy[1][i];
        sum_x2y+=pow(xy[0][i],2)*xy[1][i];
    }
    matrix[0][0]=n;
    matrix[0][1]=sum_x;
    matrix[0][2]=sum_x2;
    matrix[0][3]=sum_y;
    matrix[1][0]=sum_x;
    matrix[1][1]=sum_x2;
    matrix[1][2]=sum_x3;
    matrix[1][3]=sum_xy;
    matrix[2][0]=sum_x2;
    matrix[2][1]=sum_x3;
    matrix[2][2]=sum_x4;
    matrix[2][3]=sum_x2y;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i!=j)
            {
                ratio=matrix[j][i]/matrix[i][i];
                for(int k=0; k<4; k++)
                  matrix[j][k]-=ratio*matrix[j][k];
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        a=matrix[i][i];
        for(int j=0; j<4; j++)
         matrix[i][j]/=a;
    }
    for(int i=0; i<3; i++) 
      printf("\n%c=>%.2f",97+i,matrix[i][3]);
}