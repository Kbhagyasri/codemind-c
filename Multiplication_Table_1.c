#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=12;i++)
    {
        d=a*i;
        printf("%d x %d = %d
",a,i,d);
    }
}