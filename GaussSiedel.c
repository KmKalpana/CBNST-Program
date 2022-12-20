#include <stdio.h>
#include <math.h>
#define f1(x,y,z) (17-y+2*z)/20
#define f2(x,y,z) (-18-3*x+z)/20
#define f3(x,y,z) (25-2*x+3*y)/20
int main()
{
    float x0=0, y0=0, z0=0;
    float x1, y1, z1, e1, e2, e3, e;
    int count=1;
    printf("Enter tolerable error: ");
    scanf("%f",&e);
    printf("\nCount the number of approximation:\n");
    do{
        x1=f1(x0,y0,z0);
        y1=f2(x1,y0,z0);
        z1=f3(x1,y1,z0);
        printf("Count no : %d  x1=%0.3f    y=%0.3f    z=%0.3f\n",count++,x1,y1,z1);
        e1=fabs(x0-x1);
        e2=fabs(y0-y1);
        e3=fabs(z0-z1);
        x0=x1;
        y0=y1;
        z0=z1;
    }while(e1>e && e2>e && e3>e);
    printf("Solution is: x=%0.3f    y=%0.3f   z=%0.3f");
    return 0;
}