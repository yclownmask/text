#include <stdio.h>
int Sun(int n)
{
    if(n==1) return 1;
    else return n+Sun(n-1); 
}
void main()
{
    int n;
    printf("请输入n的值：");
    scanf("%d",&n);
    printf("sun n= %d\n",Sun(n));
}

/*
#include <stdio.h>
void fun(char *s)
{
    char t;
    if (*s!='\0')
    {
        t=*s++;
        fun(s);
        if (t!='\0') printf("%c",t);
    }
}
void main()
{
    char *a="1234";
    fun(a);
    printf("\n");
}


#include <stdio.h>
void fun(int *a,int i,int j)
{
    int t;
    if (i<j)
    {
        t=a[i];a[i]=a[j];a[j]=t;
        fun(a,++i,--j);
    }
}
void main()
{
    int a[]={1,2,3,4,5,6},i;
    fun(a,0,5);
    for (i=0;i<6;i++)
        printf("%d ",a[i]);
    printf("\n");
}


#include <stdio.h>
char *strc(char a[],char b[],int n)
{
    char s[n];
    int i,j;
    for (i=0;a[i]!='\0';i++)
        s[i]=a[i];
    for (j=0;b[j]!='\0';j++,i++)
        s[i]=b[j];
    s[i]='\0';
    return s;
}
int main()
{
    char a[]="hello";
    char b[]="world";
    int i,j;
    for (i=0;a[i]!='\0';i++);
    for (j=0;b[j]!='\0';j++);
    printf("%s\n",strc(a,b,i+j));
    return 0;
}


#include <stdio.h>
#include <string.h>
char *findlong(char *str[],int n,int *length)
{
    int max=0;
    int no,i,tmp;
    for (i=0;i<n;i++)
        if((tmp=strlen(str[i]))>max)
        {
            max=tmp;
            no=i;
        }
    *length=max;
    return (str[no]);
}
void main()
{
    char *str[10],*p;
    int n,i,length;
    printf("字符串的个数：");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("第 %d 个字符串：",i+1);
        str[i]=(char *)malloc(20);
        scanf("%s",str[i]);
    }
    p=findlong(str,n,&length);
    printf("最长字符串：%s\t",p);
    printf("长度：%d\n",length);
}


#include <stdio.h>
#include <string.h>
char *maxlen(char *a[])
{
    int j;
    char *max=a[0];
    for (j=1;j<5;j++)
        if (strlen(a[j])>strlen(max))
            max=a[j];
    return max;
}
int main()
{
    char *a[5]={"hello","hi","tomaro","milek","aaaaaaa"};
    printf("最长的字符串是：%s\n",maxlen(a));
    return 0;
}


#include <stdio.h>
#include <math.h>
void convert(int *s,char a[],int i)
{
    int k,b,j=0;
    for (k=--i;k>=0;k--,j++)
    {
        if (a[k]>='0' && a[k]<='9')
            b=a[k]-'0';
        if (a[k]>='A' && a[k]<='F')
            b=a[k]-'A'+10;
        *s+=b*pow(16,j);
    }
}
int main()
{
    char a[5];
    int s=0,i;
    printf("请输入一个十六进制（不超过4位）：");
    for (i=0;(a[i]=getchar())!='\n';i++);
    a[i]='\0';
    convert(&s,a,i);
    printf("%d\n",s);
    return 0;
}


#include <stdio.h>
#include <string.h>
void f(char p[][10],int n)
{
    char t[10];
    int i,j;
    for (i=0;i<=n-1;i++)
        for (j=i+1;j<=n-1;j++)
            if (strcmp(p[i],p[j])<0)
            {
                strcpy(t,p[i]);
                strcpy(p[i],p[j]);
                strcpy(p[j],t);
            }
}
int main()
{
    char p[][10]={"abc","aabdfg","abbd","dcdbe","cd"};
    int i;
    f(p,5);
    printf("\n%s\n",p[0]);
    return 0;
}


#include <stdio.h>
char cchar(char ch)
{
    if (ch>='A' && ch<='Z')
        ch=ch-'A'+'a';
    return ch;
}
int main()
{
    char s[]="ABC+abc=defDEF",*p=s;
    while (*p)
    {
        cchar(*p);
        p++;
    }
    printf("%s\n",s);
}


#include <stdio.h>
int fun()
{
    float fen,zfen,aver;
    int n=0;
    printf("请输入各个学生的分数：");
    scanf("%f",&fen);
    while (fen!=-1)
    {
        n++;
        zfen+=fen;
        scanf("%f",&fen);
    }
    aver=zfen/n;
    printf("%d 个学生的平均分是 %.2f\n",n,aver);    
}
int main()
{
    fun();
    return 0;
}


#include <stdio.h>
int getbits(short unsigned value,int n1,int n2)
{
    short unsigned z;
    z=~0;
    z=(z>>n1) & (z<<(16-n2));
    z=value & z;
    z=z>>(16-n2);
    return z;
}
int main()
{
    short unsigned a;
    int n1,n2;
    printf("请输入一个八进制数：");
    scanf("%ho",&a);
    printf("n1,n2: ");
    scanf("%d %d",&n1,&n2);
    printf("%o\n",getbits(a,n1-1,n2));
    return 0;
}


#include <stdio.h>
#include <math.h>
int func (int n)
{
    int i;
    for (i=2;i<=sqrt(n);i++)
        if (n%i==0) 
            return 1;
    return 0;
}
int main()
{
    int n;
    printf("请输入需判断的一个整数：");
    scanf("%d",&n);
    if (func(n))
        printf("%d 不是素数\n",n);
    else 
        printf("%d 是素数\n",n);
    return 0;
}*/