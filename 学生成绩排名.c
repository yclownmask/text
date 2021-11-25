//学号 期中 期末 平均分
#include <stdio.h>
struct Student
{
    int num;
    float x;
    float y;
    float aver;
}grade[3],*p=grade;
void input(struct Student stu[])
{
    int i;
    printf("请输入三个学生\n学号 期中 期末 ：\n");
    for (i=0;i<3;i++)
    {
        scanf("%d %f %f",&stu[i].num,&stu[i].x,&stu[i].y);
        stu[i].aver=(stu[i].x+stu[i].y)/2;
    }
    printf("\n");
}
void gradetable(struct Student stu[])
{
    struct Student temp;
    int i,j;
    for (i=0;i<2;i++)
        for (j=0;j<2-i;j++)
            if (stu[j].aver<stu[j+1].aver)
                {
                    temp=stu[j];
                    stu[j]=stu[j+1];
                    stu[j+1]=temp;
                }

}
int main()
{
    int i;
    input(p);
    gradetable(p);
    printf("学号 期中 期末 平均分\n");
    for (i=0;i<3;i++)
        printf("%d %.1f %.1f %.1f\n",grade[i].num,grade[i].x,grade[i].y,grade[i].aver);
    return 0;
}
