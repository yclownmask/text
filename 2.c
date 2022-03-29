#include <stdio.h>
#include <string.h>
void MaxComStr(char s[],char t[],char c[])
{
    int index=0,length=0,i,j,k,length1;
    i=0;
    while (s[i]!='\0')
    {
        j=0;
        while (t[j]!='\0')
        {
            if (s[i]==t[j])
            {
                length1=1;
                for (k=1;i+k<strlen(s) && j+k<strlen(t) && s[i+k]==t[j+k];k++)
                    length1++;
                if (length1>length)
                {
                    index=i;
                    length=length1;
                }
                j+=length;
            }
            else j++;
        }
        i++;
    }
    for (i=0;i<length;i++)
        c[i]=s[index+i];
    c[length]='\0';
}
int main()
{
    char *s="aababcabcdabcde";
    char *t="xabcdy";
    char c[20];
    MaxComStr(s,t,c);
    printf("s= %s\n",s);
    printf("t= %s\n",t);
    printf("s和t的最大公共子串： %s\n",c);
}

/*
#include <stdio.h>
int cti(char s[])
{
    int i,sign,n;
    for (i=0;s[i]==' ' || s[i]=='\n' || s[i]=='\t';i++);
    sign=1;
    if (s[i]=='+' || s[i]=='-')
        sign=(s[i++]=='+') ? 1:-1;
    for (n=0;s[i]>='0' && s[i]<='9';i++)
        n=10*n+s[i]-'0';
    return (sign*n);
}
int main()
{
    char s[50];
    int n;
    printf("输入一个字符串：");
    scanf("%s",s);
    n=cti(s);
    printf("对应的整数： %d\n",n);
    return 0;
}*/