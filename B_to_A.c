#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&m,&n);
    for(i=n;i>=m;i--)
    {
        printf("%d ",i);
    }
}