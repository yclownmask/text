/*
//二分法求（-10，10）之间的根
#include <stdio.h>
#include <math.h>
int main()
{
    float x0,x1,x2,fx0,fx1,fx2;
    do
    {
        printf("enter x1 & x2: \n");
        scanf("%f %f",&x1,&x2);
        fx1=x1*((2*x1-4)*x1+3)-6;
        fx2=x2*((2*x2-4)*x2+3)-6;
    } while (fx1*fx2>0);
    do
    {
        x0=(x1+x2)/2;
        fx0=x0*((2*x0-4)*x0+3)-6;
        if((fx0*fx1)<0)
        {
            x2=x0;
            fx2=fx0;
        }
        else
        {
            x1=x0;
            fx1=fx0;
        }
    } while (fabs(fx0)>1e-5);
    printf("x=%6.2f\n",x0);
    return 0;
}


//牛顿迭代法（牛顿切线法）
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x0,f1,f;
    x1=1.5;
    do
    {
        x0=x1;
        f=((2*x0-4)*x0+3)*x0-6;
        f1=(6*x0-8)*x0+3;
        x1=x0-f/f1;
    }while (fabs(x0-x1)>=1e-5);
    printf("The root of equation is %5.2f\n",x1);
    return 0;
}


//迭代法求平方根
#include <stdio.h>
#include <math.h>
int main()
{
    float a,x0,x1;
    printf("enter positive number: ");
    scanf("%f",&a);
    x0=a/2;
    x1=(x0+a/x0)/2;
    while (fabs(x0-x1)>=1e-5)
    {
        x0=x1;
        x1=(x0+a/x0)/2;
    }
    printf("The square root of %.2f is %.5f\n",a,x1);
    return 0;
}*/