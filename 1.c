
/*//4-2-25
#include <stdio.h>
int main()
{
    char str1[20],str2[20],str3[20];
    int count1=0,count2,count3=0;
    printf("输入str1：");
    scanf("%s",str1);
    printf("输入str2: ");
    scanf("%s",str2);
    while (str1[count1]!='\0')
    {
        count2=0;
        while (str2[count2]!='\0')
        {
            if (str1[count1]==str2[count2])
            {
                str3[count3]=str1[count1];
                count3++;
                break;
            }
            count2++;
        }
        count1++;
    }
    str3[count3]='\0';
    if(str3[0]!='\0')
        printf("交集=%s\n",str3);
    return 0;
}

//4-2-24
#include <stdio.h>
#define Max 50
int fun(char str[],char a[],int c[])
{
    int i,j,k=0,len=0;
    for (;str[len]!='\0';len++);
    a[0]=str[0];c[0]=1;k++;
    for (i=1;i<len;i++) c[i]=0;
    for (i=1;i<len;i++)
    {
        j=0;
        while (j<k && a[j]!=str[i]) j++;
        if (j==k)
        {
            a[k]=str[i];
            c[k]++;k++;
        }
        else c[j]++;
    }
    return k;
}
int main()
{
    char str[Max],a[Max];
    int c[Max],k,i;
    printf("输入字符串：");
    gets(str);
    k=fun(str,a,c);
    printf("统计结果如下：\n");
    printf("  字符 ");
    for(i=0;i<k;i++)
        printf("%3c",a[i]);
    printf("\n");
    printf("  频度 ");
    for (i=0;i<k;i++)
        printf("%3d",c[i]);
    printf("\n");
    return 0;
}


#include <stdio.h>
int main()
{
    char b[]="0123456789ABCDEF";
    int c[64],d,i=0,base;
    long n;
    printf("n: ");
    scanf("%ld",&n);
    do
    {
        printf("base: ");
        scanf("%d",&base);
    }while (base!=2 && base!=8 && base!=16);
    do
    {
        c[i]=n%base;
        i++;
        n=n/base;
    }while(n!=0);
    for (--i;i>=0;i--)
    {
        d=c[i];
        printf("%c",b[d]);
    }
    printf("\n");
    return 0;
}


#include <stdio.h>
#define N 100
int main()
{
    int A[N],B[N],n,m,i,j,k=0,k1;
    printf("n,i,m:");
    scanf("%d %d %d",&n,&i,&m);
    A[0]=n;
    for (j=1;j<n;j++)
        A[j]=j;
    B[k++]=i;
    A[i]=-1;j=i;
    while (k<n)
    {
        k1=0;
        while (k1<=m)
        {
            j=(j+1)%n;
            if (A[j]!=-1) k1++;
        }
        B[k++]=A[j];
        A[j]=-1;
    }
    printf("检查顺序：\n");
    for (j=0;j<n;j++)
        printf("%3d",B[j]);
    printf("\n");
    return 0;
}


#include <stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            if (i==j) sum+=a[i][j];
            else if (i+j==2) sum+=a[i][j];
        }
    printf("sum= %d\n",sum);
    return 0;
}


#include <stdio.h>
int main()
{
    int i,j,k,t;
    int a[10]={1,9,10,8,19,23,11,35,78,29};
    for (i=0;i<9;i++)
    {
        k=i;
        for (j=i+1;j<10;j++)
            if (a[k]>a[j])
                k=j;
        if (k!=i)
        {
            t=a[i];
            a[i]=a[k];
            a[k]=t;
        }
    }
    printf("顺序为：");
    for (i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}


#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,a[101];
    for (i=0;i<101;i++)
    {
        if (i==1 || i==0) {a[i]=0;continue;}
        if (i%2==0 && i!=2) {a[i]=0;continue;}
        a[i]=i;
    }
    for (i=0;i<101;i++)
    { 
        if (a[i]==0) continue;
        for (j=2;j<i;j++)
            if (a[i]%j==0) break;
        if (j==i) printf("%d  ",a[i]);
    }
    printf("\n");
    return 0;
}


#include <stdio.h>
int main()
{
    int i=0,p,max=0,n=12;
    int b[]={1,2,1,3,1,1,3,3,3,2,1,1};
    while (i<n)
    {
        p=1;i++;
        while (i<n && b[i-1]==b[i])
        {
            p++;
            i++;
        }
        if (p>max) max=p;
    }
    printf("max=%d\n",max);
    return 0;
}*/