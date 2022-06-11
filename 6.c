#include <stdio.h>
int main()
{
    char s1[20],s2[20];
    int i;
    printf("input s2: ");
    gets(s2);
    for (i=0;s2[i]!='\0';i++)
        s1[i]=s2[i];
    s1[i]='\0';
    printf("s1: %s\n",s1);
    return 0;
}


/*#include <stdio.h>
int main()
{
    char s1[20],s2[20];
    int i,result=0;
    printf("input string1：");
    gets(s1);
    printf("input string2：");
    gets(s2);
    for (i=0;s1[i]!='\0' && s2[i]!='\0';i++)
    {
        if (s1[i]==s2[i]) result=0;
        else 
            {result=s1[i]-s2[i];break;}
        
    }
    printf("\nresult：%d\n",result);
    return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
    char a[30],b[20];
    int i,j;
    printf("请输入a字符串：");
    gets(a);
    printf("请输入b字符串：");
    gets(b);
    for (j=0;a[j]!='\0';j++);
    for (i=0;b[i]!='\0';i++)
        a[j++]=b[i];
    a[j]='\0';
    printf("俩字符串连接后：%s\n",a);
    return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
    char a[30];
    int i;
    printf("请输入密码：");
    gets(a);
    printf("\n密码：");
    puts(a);
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]>='A' && a[i]<='Z') a[i]='Z'-a[i]+'A';
        else 
            if (a[i]>='a' && a[i]<='z') a[i]='z'-a[i]+'a';
    }
    printf("原文：%s\n",a);
    return 0;
}


#include <stdio.h>
int main()
{
    char a[]={"* * * * *"};
    int i,j;
    for (i=0;i<5;i++)
    {
        for (j=0;j<i;j++)
            printf(" ");
        printf("%s\n",a);
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
    char a[3][30];
    int i,j,char1,char2,num,kong,elsechar;
    char1=char2=num=kong=elsechar=0;
    for (i=0;i<3;i++)
    {
        gets(a[i]);
        for (j=0;j<strlen(a[i]);j++)
        {
            if (a[i][j]>='A' && a[i][j]<='Z') char1++;
            else if (a[i][j]>='a' && a[i][j]<='z') char2++;
            else if (a[i][j]>='0' && a[i][j]<+'9') num++;
            else if (a[i][j]==' ') kong++;
            else elsechar++;
        }
    }
    printf("大写字母：%d\n小写字母：%d\n数字：%d\n空格：%d\n其他字符：%d\n",char1,char2,num,kong,elsechar);
    return 0;
}


#include <stdio.h>
#define N 15
int main()
{
    int a[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i,num,right,left,min;
    right=N-1;
    left=0;
    printf("请输入需要查找的数：");
    scanf("%d",&num);
    while (left<=right)
    {
        min=(left+right)/2;
        if (num>a[min]) left=min+1;
        else 
            if (num<a[min]) right=min-1; 
        else 
        {printf("%d 是数组a[15]的 第%d个 元素\n",num,min+1);return 0;}
    }
    printf("%d 无此数！！！\n",num);
    return 0;
}


#include <stdio.h>
#define N 2
int main()
{
    int a[N][N];
    int i,j,min,max,t,m;
    printf("请输入 %d*%d 的二维数组：\n",N,N);
    for (i=0;i<N;i++)
        for (j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    for (i=0;i<N;i++)
    {
        for (max=a[i][0],t=0,j=0;j<N;j++)
            if (max<a[i][j]) 
                {max=a[i][j];t=j;}
        for (min=a[0][t],m=0,j=0;j<N;j++)
            if (min>a[j][t])
                {min=a[j][t];m=j;}
        if (max==min) break;
    }
    if (max!=min) printf("没有！！\n");
    else printf("a[%d][%d]= %d\n",m,t,a[m][t]);
    return 0;
}


#include <stdio.h>
#define N 10
int main()
{
    int a[N][N];
    int i,j;
    for (i=0;i<N;i++)
    {   
        a[i][0]=1;
        a[i][i]=1;
    }

    for (i=2;i<N;i++)
        for (j=1;j<=i-1;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    
    for (i=0;i<N;i++)
    {
        for (j=0;j<=i;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
#define N 5
int main()
{
    int a[N];
    int left=0,right=N-1,i,t;
    printf("请输入包含 %d 个元素的数组：\n",N);
    for (i=0;i<N;i++)
        scanf("%d",&a[i]);

    for (i=1;i<=N/2;i++)
    {t=a[right];a[right]=a[left];a[left]=t;left++;right--;}

    for (i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}


//二分插入
#include <stdio.h>
int main()
{
    int a[10]={0,2,3,4,5,6,7,8,9,10};
    int n,i,right,left,min;
    right=8;
    left=0;
    printf("请输入一个数：");
    scanf("%d",&n);

    while (left+1!=right)
    {
        min=(left+right)/2;
        if (n>a[min]) left=min;
        else if (n<a[min]) right=min;
    }

    for (i=8;i>=min;i--)
        a[i+1]=a[i];
    a[min]=n;
    for (i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}


#include <stdio.h>
int main()
{
    int a[3][3],i,j;
    int sum=0;
    printf("请输入一个 3x3 的矩阵：\n");
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            if (i==j) sum+=a[i][j];
            if (i+j==2 && i!=j) sum+=a[i][j];
        }
    printf("sum= %d\n",sum);
    return 0;
}*/