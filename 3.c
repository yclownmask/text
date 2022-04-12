#include <stdio.h>
#include <string.h>
int main()
{
    char *a[7]={"Gunday","Honday","Fuesday","Eednesday","Chursday","Ariday","Baturday"};
    char *temp;
    int i,j;
    for (i=0;i<6;i++)
        for (j=0;j<6-i;j++)
            if (strcmp(a[j],a[j+1])>0)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    for (i=0;i<7;i++)
        printf("%s   ",a[i]);
    printf("\n");
    return 0;
}


/*
#include <stdio.h>
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    int b[3][2]={1,1,1,1,1,1},c[2][2]={0,0,0,0};
    int i,j,k,*p[3];
    p[0]=a[0];p[1]=b[0];p[2]=c[0];
    for (i=0;i<2;i++)
        for (j=0;j<3;j++)
            for (k=0;k<2;k++)
                *(p[2]+2*i+k)+=*(p[0]+3*i+j)*(*(p[1]+2*j+k));
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
            printf("%3d",*(p[2]+2*i+j));
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    char *week[]={"Sunday","Monday","Tursday","Wednesday","Thursday","Friday","Saturday"};
    int n;
    do
    {
        printf("请输入0～6的序号：");
        scanf("%d",&n);
    }while(n<=0 || n>=6);
    printf("英文为：%s\n",week[n]);
    return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
    char *name[6]={"FORTRAN","PASCAL","BASIC","C","COBOL","Smalltalk"};
    char temp[10],c;
    int i,j,m,f=0;
    for (i=0;(c=getchar())!='\n';i++)
        temp[i]=c;
    temp[i]='\0';
    for (i=0;i<6;i++)
    {
        for (j=0,m=0;name[i][j]!='\0' && temp[m]!='\0';j++)
            if (temp[m]==name[i][j])
                m++;
        if (temp[m]=='\0')
        {
            f=1;
            printf("%s\n",name[i]);
        }
    }
    if (f==0) printf("没有找到与 %s 相匹配的字符串\n",temp);
    return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
    char *name[6]={"FORTRAN","PASCAL","BASIC","C","COBOL","Amalltalk"};
    char *temp;
    int i,j;
    for (i=0;i<5;i++)
        for (j=0;j<5-i;j++)
            if (strcmp(name[j],name[j+1])>0)
            {
                temp=name[j+1];
                name[j+1]=name[j];
                name[j]=temp;
            }
    for (i=0;i<6;i++)
        printf("%s  ",name[i]);
    printf("\n");
    return 0;
}


//5-2-57
#include <stdio.h>
#include <string.h>
#define Max 50
char *maxword(char *s,char *t)
{
    static char comm[Max];
    char *temp,chs[Max],cht[Max];
    int i,j,found,maxlen=0;
    while (*s!='\0')
    {
        while (*s==' ')
            s++;
        for (i=0;*s!='\0' && *s!=' ';i++,s++)
            chs[i]=*s;
        chs[i]='\0';
        if (i>maxlen)
        {
            found=0;
            temp=t;
            while (*temp!='\0' && found==0)
            {
                while (*temp==' ')
                    temp++;
                for (j=0;*temp!='\0' && *temp!=' ';j++,temp++)
                    cht[j]=*temp;
                cht[j]='\0';
                if (j==i)
                {
                    if (strcmp(chs,cht)==0)
                    {
                        maxlen=i;
                        strcpy(comm,chs);
                        found=1;
                    }
                }
            }
        }
    }
    if (maxlen==0)
        return NULL;
    else
        return comm;
}
int main()
{
    char s[Max];
    char t[Max];
    char *p;
    printf("英文句子1: ");
    gets(s);
    printf("英文句子2: ");
    gets(t);
    p=maxword(s,t);
    if (p==NULL)
        printf("没有相同的单词\n");
    else
        printf("最长公共单词：%s\n",p);
    return 0;
}

//5-2-66
#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int i;
    printf("请输入一个字符串： ");
    gets(s);
    for (i=strlen(s)-1;i>=0;i--)
        printf("%2c",s[i]);
    return 0;
}*/