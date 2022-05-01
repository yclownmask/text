
/*
//释放链表
void freelist(struct Stud *h)
{
    struct Stud *p=h,*q=h->next;
    while (q!=NULL)
    {
        free(p);
        p=q;q=q->next;
    }
    free(q);
}

//删除结点
int delnode(struct Stud *h,int i)
{
    struct Stud *p,*q;int j;
    if (i<1) return 0;
    q=h;j=1;
    while (q!=NULL && j<i)
    {
        q=q->next;j++
    }
    if (q==NULL) return 0;
    p=q->next;
    if (p==NULL) return 0;
    q->next=p->next;
    free(p);
    return 1;

}

//插入节点
int insnode(struct Stud *h,int i,int n,int s)
{
    struct Stud *p,*q;int j;
    p=(struct Stud *)malloc(sizeof(struct Stud));
    p->no=n;p->next=s;
    if(i<1) return 0;
    q=h;j=1;
    while (q!=NULL && j<i)
        {q=q->next;j++}
    p->next=q->next;
    q->next=p;
    return 1;
}

//查找节点
struct Stud *locate(struct Stud *h,int n)
{
    struct Stud *p=h->next;
    while (p!=NULL && p->no!=n)
        p=p->next;
    return p;
}


//显示链表
void disp(struct Stud *h)
{
    struct Stud *p=h->next;
    printf("输出链表：");
    if (p==NULL) printf("空表\n");
    else
    {
        while (p!=NULL) 
        {
            printf("(%d,%d) ",p->no,p->score);
            p=p->next;
        }
        printf("\n");
    } 
}

//建立链表
struct Stud *create()
{
    struct Stud *h,*t,*p;
    int n,s;
    h=(struct Stud *)malloc(sizeof(struct Stud));
    t=h;
    while (1)
    {
        printf("学号 分数：");
        scanf("%d %d",&n,&s);
        if (n==0 && s==0)
            break;
        else
        {
            p=(struct Stud *)malloc(sizeof(struct Stud));
            p->no=n;p->score=s;
            t->next=p;t=p;
        }
    }
    t->next=NULL;
    return h;
}*/


/*
#include <stdio.h>
#include <string.h>
#define MAX 10
struct telephone
{
    char name[10];
    char telno[20];
}s[MAX];
void search(struct telephone b[],char *x,int n)
{
    int i=0;
    while (strcmp(b[i].name,x)!=0 && i<n)
        i++;
    if (i<n) printf("电话号码是： %s\n",b[i].telno);
    else printf("没有找到！\n");
}
void main()
{
    int i=0;
    char na[10],tel[20];
    while (1)
    {
        printf("请输入姓名：");
        gets(na);
        if (strcmp(na,"#")==0)
            break;
        printf("输入电话号码：");
        gets(tel);
        strcpy(s[i].name,na);
        strcpy(s[i].telno,tel);
        i++;
    }
    printf("查找的姓名：");
    gets(na);
    search(s,na,i);
}


#include <stdio.h>
int daytab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                    {0,31,29,31,30,31,30,31,31,30,31,30,31}};
struct date
{
    int year;
    int month;
    int day;
}dt;
int day_of_year(int year,int month,int day)
{
    int i,leap;
    leap=(year%4==0 && year%100!=0 || year%400==0);
    for (i=1;i<month;i++)
        day+=daytab[leap][i];
    return day;
}
void month_day(int year,int yearday,int *pmonth,int *pday)
{
    int i,leap;
    leap=(year%4==0 && year%100!=0 || year%400==0);
    for (i=1;yearday>daytab[leap][i];i++)
        yearday-=daytab[leap][i];
    *pmonth=i;
    *pday=yearday;
}
void main()
{
    int k,days;
    while(1)
    {
        printf("1:日期->天数 2:年、天数->日期 其他:退出\n选择：");
        scanf("%d",&k);
        if (k==1)
        {
            printf("输入日期（年、月、日）：");
            scanf("%d %d %d",&dt.year,&dt.month,&dt.day);
            printf("%d年%d月%d日  是这一年的第 %d 天\n\n",dt.year,dt.month,
            dt.day,day_of_year(dt.year,dt.month,dt.day));
        }
        else if (k==2)
        {
            printf("输入 年份天数：");
            scanf("%d %d",&dt.year,&days);
            month_day(dt.year,days,&dt.month,&dt.day);
            printf("对应日期是 %d年%d月%d日\n\n",dt.year,dt.month,dt.day);
        }
        else break;
    }
}



#include <stdio.h>
int main()
{
    int m,year,month,sun,day=0,day1=0;
    printf("请输入需求的功能(1,2)：");
    scanf("%d",&m);
    if (m==1)
    {
        printf("请输入日期 年、月、日：");
        scanf("%d %d %d",&year,&month,&sun);
        for (--month;month>0;month--)
            switch (month)
            {
                case 1:case 3:case 5:case 7:case 8:case 10:case 12: day+=31;break;
                case 4:case 6:case 9:case 11: day+=30;break;
                case 2: if (year%4==0 && year%100!=0 || year%400==0) day+=29;
                        else day+=28;
            }
        day+=sun;
        printf("这天是该年的第 %d 天\n",day);
    }
    else if (m==2)
    {
        printf("请输入 年份、天数：");
        scanf("%d %d",&year,&day);
        for (month=1;(day-=day1)>=0;month++)
            switch (month)
            {
                case 1:case 3:case 5:case 7:case 8:case 10:case 12: day1=31;break;
                case 4:case 6:case 9:case 11: day1=30;break;
                case 2: if (year%4==0 && year%100!=0 || year%400==0) day1=29;
                        else day1=28;
            }
        printf("对应的日期：%d年%d月%d日\n",year,month-1,day+day1);
    }
    else 
        printf("现未有 %d 功能，请谅解\n",m);
    return 0;
}*/