/*#include <stdio.h>
#include <string.h>
int main()
{
    void sort(char a[]);
    char a[30];
    printf("input string:  ");
    gets(a);
    sort(a);
    return 0;
}
void sort(char a[])
{
    int i,j,N;
    char t;
    N=strlen(a);
    for (i=0;i<N-1;i++)
        for (j=0;j<N-i-1;j++)
            if(a[j]>a[j+1])
            {t=a[j];a[j]=a[j+1];a[j+1]=t;}
    printf("string sorted:  %s\n",a);
}



#include <stdio.h>
int main()
{
    void maxstr(char a[]);
    char a[40];
    printf("请输入一行字符： ");
    gets(a);
    maxstr(a);
    return 0;
}
void maxstr(char a[])
{
    int i,j=0,max=0,n;
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]!=' '&& a[i]!='.') j++;
        else
        {
            if (max<j) 
            {max=j;n=i-j;j=0;}
        }
    }
    printf("最长字符串：");
    for (i=n;i<n+max;i++)
       printf("%c",a[i]);
    printf("\n");
}



#include <stdio.h>
#include <string.h>
int c1=0,c2=0,c3=0,c4=0;
int main()
{
    void fun(char str[]);
    char str[40];
    printf("input string： ");
    gets(str);
    fun(str);
    printf("字母：%d\n数字：%d\n空格：%d\n其他字符：%d\n",c1,c2,c3,c4);
    return 0;
}
void fun(char str[])
{
    int i;
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]>='A'&&str[i]<='Z' || str[i]>='a'&&str[i]<='z') c1++;
        else if (str[i]>='0'&&str[i]<='9') c2++;
        else if (str[i]==' ') c3++;
        else c4++;
    }
}


#include <stdio.h>
#include <string.h>
int main()
{
    void insert(char str[]);
    char str[10];
    printf("input four digits：");
    scanf("%s",str);
    insert(str);
    printf("ouput：%s\n",str);
    return 0;
}
void insert(char str[])
{
    int i;
    for (i=strlen(str);i>0;i--)
    {
        str[2*i]=str[i];
        str[2*i-1]=' ';
    }
}


#include <stdio.h>
int main()
{
    void cpy(char s[],char s1[]);
    char s[20],s1[10];
    printf("input string：");
    scanf("%s",s);
    cpy(s,s1);
    printf("The vowel letters are：%s\n",s1);
    return 0;
}
void cpy(char s[],char s1[])
{
    int i,j;
    for(i=0,j=0;s[i]!='\0';i++)
        if (s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'
        ||s[i]=='O'||s[i]=='u'||s[i]=='U')
            s1[j++]=s[i];
    s1[j]='\0';
}


#include <stdio.h>
#include <string.h>
int main()
{
    void str(char s1[],char s2[]);
    char s1[30],s2[20];
    printf("请输入 s1 字符串：");
    gets(s1);
    printf("请输入 s2 字符串：");
    scanf("%s",s2);
    str(s1,s2);
    puts(s1);
    return 0;
}
void str(char s1[],char s2[])
{
    int i,j;
    for (i=strlen(s1),j=0;s2[j]!='\0';i++,j++)
        s1[i]=s2[j];
    s1[i]='\0';
}


#include <stdio.h>
#include <string.h>
int main()
{
    void fun(char a[]);
    char a[20];
    printf("请输入一个字符串：");
    gets(a);
    fun(a);
    printf("反序：");
    puts(a);
    return 0;
}
void fun(char a[])
{
    int i,t;
    char m;
    t=strlen(a);
    for (i=0;i<(t/2);i++)
    {m=a[i];a[i]=a[t-i-1];a[t-i-1]=m;}
}


#include <stdio.h>
#define N 4
int main()
{
    void fun(int a[][N]);
    int a[N][N];
    int i,j;
    printf("请输入 %d*%d 二维数组：\n",N,N);
    for (i=0;i<N;i++)
        for (j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    fun(a);
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
void fun(int a[][N])
{
    int i,j,t;
    for (i=0;i<N;i++)
        for (j=i+1;j<N;j++)//对角线没有改变，因不需要交换
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
}


#include <stdio.h>
#include <math.h>
int main()
{
    int fun(int);
    int num;
    printf("请输入一个整数：");
    scanf("%d",&num);
    fun(num);
    return 0;
}
int fun(int num)
{
    int i;
    for (i=2;i<=sqrt(num);i++)
        if (num%i==0)
        {
            printf("%d 不是素数！！！\n",num);
            return 0;
        }
    printf("%d 是素数！！！\n",num);
    return 0;
}


#include <stdio.h>
#include <math.h>
float x1,x2,disc,p,q;
int main()
{
    void greater_than_zero(float,float);
    void equal_to_zero(float,float);
    void smaller_than_zero(float,float);
    float a,b,c;
    printf("input a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    printf("equation: %5.2f*x*x+%5.2f*x+%5.2f=0\n",a,b,c);
    disc=b*b-4*a*c;
    printf("root:\n");
    if (disc>0)
    {
        greater_than_zero(a,b);
        printf("x1=%f\t\tx2=%f\n",x1,x2);
    }
    else if (disc==0)
    {
        equal_to_zero(a,b);
        printf("x1=%f\t\tx2=%f\n",x1,x2);
    }
    else
    {
        smaller_than_zero(a,b);
        printf("x1=%f+%fi\tx2=%f-%fi\n",p,q,p,q);
    }
    return 0;
}
void greater_than_zero(float a,float b)
{
    x1=(-b+sqrt(disc))/(2*a);
    x2=(-b-sqrt(disc))/(2*a);
}
void equal_to_zero(float a,float b)
{
    x1=x2=(-b)/(2*a);
}
void smaller_than_zero(float a,float b)
{
    p=-b/(a*2);
    q=sqrt(-disc)/(2*a);
}



#include <stdio.h>
int maxyue(int a,int b)
{
    int t;
    while(a<b) {t=a;a=b;b=t;}
    while (b) {t=a%b;a=b;b=t;}
    return a;
}
int minbe(int a,int b,int c)
{
    return a*b/c;
}
int main()
{
    int a,b,c;
    printf("input a、b : ");
    scanf("%d %d",&a,&b);
    c=maxyue(a,b);
    printf("最大公约数：%d\n最小公倍数：%d\n",c,minbe(a,b,c));
    return 0;
}*/