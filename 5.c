/*#include <stdio.h>
int main()
{
    int i,j,t,a[10],min;
    printf("请输入10个整数：");
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
    for (i=0;i<10-1;i++)
    {
        min=i;
        for (j=i+1;j<10;j++)
            if (a[min]>a[j]) min=j;
    t=a[i];a[i]=a[min];a[min]=t;
    }
    for (i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}


#include <stdio.h>
#include <math.h>
int main()
{
    int a[101];
    int i,j;
    for (i=0;i<101;i++)
        a[i]=i;
    a[1]=0;
    for(i=2;i<sqrt(100);i++)
        for (j=i+1;j<=100;j++)
            if (a[j]!=0 && a[i]!=0)
                if (a[j]%a[i]==0) 
                    a[j]=0;
    for (i=2;i<101;i++)
        if (a[i]!=0)
            printf("%d ",a[i]);
    printf("\n");
    return 0;
}


#include <stdio.h>
#include <math.h>
int main()
{
    int x,i,j,n;
    printf("请输入n的值：");
    scanf("%d",&n);
    for (x=1;x<=2*n-1;x++)
    {
        for(i=1;i<=fabs(n-x);i++)
            printf("  ");
        for(j=1;j<=2*(n-fabs(n-x))-1;j++)
        printf("* ");
        printf("\n");
    }
}



#include <stdio.h>
#include <math.h>
int main()
{
    float a,n1,n;
    printf("请输入a的值：");
    scanf("%f",&a);
    n=a/2;
    n1=(n+a/n)/2;
    do
    {
        n=n1;
        n1=(n+a/n)/2;
    }while(fabs(n-n1)>=1e-5);
    printf("The square root of %5.2f is %8.5f\n",a,n1);
    return 0;
}


#include <stdio.h>
int main()
{
    int i,sum=1;
    for (i=10-1;i>=1;i--)
        sum=(sum+1)*2;
    printf("sum= %d\n",sum);
    return 0;
}


#include <stdio.h>
int main()
{
    double sn=100,hn=sn/2;
    int i;
    for (i=2;i<=10;i++)
    {
        sn=sn+2*hn;
        hn=hn/2;
    }
    printf("第10次落地共经过 %f 米\n第10次反弹 %f 米\n",sn,hn);
    return 0;
}


#include <stdio.h>
int main() 
{
    int i;
    double a,b,sum=0;
    for (a=1,b=2,i=1;i<=20;i++)
    {
        sum+=b/a;
        b=b+a;
        a=b-a;
    }
    printf("sum=  %.10f\n",sum);
    return 0;
}


#include <stdio.h>
int main()
{
    int i,j,sum;
    for (i=2;i<1000;i++)
    {
        sum=0;
        for (j=1;j<=i/2;j++)
            if (i%j==0) 
                sum+=j;
        if (sum==i)
        {
            printf("%d its factors are ",i);
            for (j=1;j<=i/2;j++)
                if (i%j==0) 
                    printf("%5d",j);
            printf("\n");
        }
    }

}


#include <stdio.h>
#include <math.h>
int main()
{
    int i,g,s,b;
    printf("水仙花数：");
    for(i=100;i<=999;i++)
    {
        b=i/100; s=i/10%10; g=i%10;
        if (i==pow(b,3)+pow(s,3)+pow(g,3))
            printf("%6d",i);
    }
    printf("\n");
    return 0;
}


#include <stdio.h>
int main()
{
    double k1,k2,k3;
    int i;
    for (k1=k2=k3=0,i=1;i<=100;i++)
    {
        k1+=i;
        if (i<=50) k2+=i*i;
        if (i<=10) k3+=1.0/i;
    }
    printf("sum= %15.6f\n",k1+k2+k3);
    return 0;
}


#include <stdio.h>
int main()
{
    long int n=1,i,sum=0;
    for (i=1;i<=20;i++)
    {
        n*=i;
        sum+=n;
    }
    printf("1!+2!+3!+...+20!= %ld\n",sum);
    return 0;
}


#include <stdio.h>
int main()
{
    long int sum=0;
    int a,n,i,t=0;
    printf("请输入a,n的值：");
    scanf("%d %d",&a,&n);
    for (i=1;i<=n;i++)
    {
        t=t*10+a;
        sum+=t;
    }
    printf("a+aa+aaa+...= %ld\n",sum);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    int n1,n2,n3,n4;
    n1=n2=n3=n4=0;
    printf("请输入一行字符：\n");
    while ((c=getchar())!='\n')
    {
        if (c>='A'&&c<='Z' || c>='a'&&c<='z') n1++;
        else if(c==' ') n2++;
        else if(c>='0' && c<='9') n3++;
        else n4++;
    }
    printf("英文字母：%d 个\n空格：%d 个\n数字：%d 个\n其他字符：%d 个\n",n1,n2,n3,n4);
    return 0;
}


#include <stdio.h>
int main()
{
    int m,n,p,t;
    printf("请输入两个正整数 m,n：");
    scanf("%d %d",&m,&n);
    p=m*n;
    if(m<n)
    {m=m+n;n=m-n;m=m-n;}
    while (n)
    {t=m%n;m=n;n=t;}
    printf("最大公约数：%d\t，最小公倍数：%d\n",m,p/m);
    return 0;
}


#include <stdio.h>
#include <math.h>
int main()
{
    int sign=1,n=0;
    double i=1.0,sum=0.0,a=1.0;
    while (fabs(a)>=1e-6)
    {
        sum+=sign*a;
        sign*=-1;
        i+=2;
        a=1/i;
        n++;
    }
    printf("循环体执行次数：%d\n",n);
    return 0;
}

#include <stdio.h>
int main()
{
    int x[4][4],n=0,i,j;
    for (j=0;j<4;j++)
        for (i=3;i>=j;i--)
        {n++;x[i][j]=n;};
    for (i=0;i<4;i++)
    {
        for (j=0;j<=i;j++)
            printf("%3d",x[i][j]);
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
#define N 8
main()
{
    int a[N+1][N+1]={0},i,j;
    for (i=1;i<=N/2;i++)
        for (j=i;j<=N+1-i;j++)
        {
            a[i][j]=a[N+1-i][j]=i;
            a[j][i]=a[j][N+1-i]=i;
        }
    if (N%2==1)
        a[N/2+1][N/2+1]=N/2+1;
        
    for (i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
#define N 8
int main()
{
    int a[N][N],i,j;
    for (i=0;i<N;i++)
        for (j=0;j<N;j++)
        {
            if (i==0)
                a[i][j]=1;
            else if (j<i || j>N-1-i) 
                a[i][j]=a[i-1][j]; 
            else
                a[i][j]=a[i-1][j]+1;
        }
    for (i=0;i<N/2;i++)
        {for (j=0;j<N;j++)
            printf("%3d",a[i][j]); 
        printf("\n");}
    for (--i;i>=0;i--)
        {for (j=0;j<N;j++)
            printf("%3d",a[i][j]); 
        printf("\n");}
    return 0;
}


#include <stdio.h>
int main()
{
    int i,j,n,max,m;
    int a[3][3];
    printf("请输入一个（3*3）矩阵:\n");
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    max=a[0][0];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            if (max<a[i][j])
                {max=a[i][j];n=i;m=j;}
        for (j=0;j<3;j++)
            if (max>a[j][m]) break;
        if (j==3) break;          
    }
    printf("%d ：在第%d行最大 在第%d列最小\n",max,n+1,m+1);
    return 0;
}*/

/*#include <stdio.h>
#define CONVERSE
void main()
{
    char str[30],*p=str;
    printf("输入一字符串：");
    scanf("%s",str);
    printf("输出结果：");
    #ifndef CONVERSE
    printf("%s\n",str);
    #else
    while (*p++!='\0');
    p-=2;
    while (p>=str)
        printf("%c",*p--);
    printf("\n");
    #endif
}*/

/*#include <stdio.h>
#define isupper(c) ((c)>='A' && (c)<='Z')
#define islower(c) ((c)>='a' && (c)<='z')
#define tolower(c) (isupper(c) ? ((c)+('a'-'A')):(c))
#define toupper(c) (islower(c) ? ((c)-('a'-'A')):(c))
void main()
{
    char s[20];
    int i;
    printf("输入字符串：");
    scanf("%s",s);
    for (i=0;s[i];i++)
    {
        if (isupper(s[i]))
            s[i]=tolower(s[i]);
        else if (islower(s[i]))
            s[i]=toupper(s[i]);
    }
    printf("转换的结果：%s\n",s);
}*/

/*
//先进后出 栈
#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct node
    {
        char info;
        struct node *link;
    }*top,*p;
    char c;
    printf("输入一行字符：");
    top=NULL;
    while ((c=getchar())!='\n')
    {
        p=(struct node *)malloc(sizeof(struct node));
        p->info=c;
        p->link=top;
        top=p;
    }
    printf("输出结果：");
    while (top!=NULL)
    {
        p=top;
        top=p->link;
        printf("%c ",p->info);
        free(p);
    }
    printf("\n");
}*/