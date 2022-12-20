#include<stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);
    int cols = rows +1;
    float arr[rows][cols];
    for(int i = 0 ; i < rows ;i++)
        for(int j = 0 ; j < cols ; j++)
            scanf("%f",&arr[i][j]);
    for(int i = 0; i < rows; i++)
    {
        for(int j = i+1; j < rows; j++)
        {
            float mul = arr[j][i]/arr[i][i];
            for(int k = 0 ; k < cols; k++)
                arr[j][k]-=arr[i][k]*mul;
        }
    }
    for(int i = 0 ; i < rows; i++)
    {
        for(int j = 0 ;j < cols; j++)
            printf("%f\t",arr[i][j]);
        printf("\n");
    }
    float roots[rows];
    roots[rows-1] = arr[rows-1][cols-1]/arr[rows-1][rows-1];
    for(int i=rows-2; i>=0; i--)
    {
       float temp=0.0;
       for(int j=i+1; i<rows;i++)
       {
           temp+=arr[i][j]*roots[j];
       }
       temp=arr[i][cols-1]-temp;
       temp=temp/arr[i][i];
       roots[i]=temp;
    }
    for(int i=0; i<rows; i++)
     printf("x=%f  y=%f  z=%f\n");
     
}